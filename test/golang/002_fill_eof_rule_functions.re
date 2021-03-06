//go:generate re2go $INPUT -o $OUTPUT 
package main

import "fmt"
import "os"

var SIZE int = 11

type YYCTYPE byte
type Input struct {
	file   *os.File
	data   []byte
	cursor int
	marker int
	token  int
	limit  int
	eof    bool
}

func peek(in *Input) func() YYCTYPE {
	return func() YYCTYPE {
		return YYCTYPE(in.data[in.cursor])
	}
}

func skip(in *Input) func() {
	return func() {
		in.cursor++
	}
}

func backup(in *Input) func() {
	return func() {
		in.marker = in.cursor
	}
}

func restore(in *Input) func() {
	return func() {
		in.cursor = in.marker
	}
}

func fill(in *Input) func() int {
	return func() int {
		// If nothing can be read, fail.
		if in.eof {
			return 1
		}

		// Check if at least some space can be freed.
		if in.token == 0 {
			// In real life can reallocate a larger buffer.
			panic("fill error: lexeme too long")
		}

		// Discard everything up to the start of the current lexeme,
		// shift buffer contents and adjust offsets.
		copy(in.data[0:], in.data[in.token:in.limit])
		in.cursor -= in.token
		in.marker -= in.token
		in.limit -= in.token
		in.token = 0

		// Read new data (as much as possible to fill the buffer).
		n, _ := in.file.Read(in.data[in.limit:SIZE])
		in.limit += n
		in.data[in.limit] = 0
		fmt.Printf("fill: %v '%s'\n", in.data[:in.limit+1],
			string(in.data[:in.limit]))

		// If read less than expected, this is the end of input.
		in.eof = in.limit < SIZE

		// If nothing has been read, fail.
		if n == 0 {
			return 1
		}

		return 0
	}
}

func lessthan(in *Input) func(int) bool {
	return func(n int) bool {
		return in.limit-in.cursor < n
	}
}

func Lex(in *Input) int {
	YYPEEK := peek(in)
	YYSKIP := skip(in)
	YYBACKUP := backup(in)
	YYRESTORE := restore(in)
	YYFILL := fill(in)
	YYLESSTHAN := lessthan(in)
	in.token = in.cursor

	/*!re2c
	re2c:eof = 0;
	re2c:api:style = functions;

	* {
		fmt.Println("error")
		return -1
	}

	$ {
		fmt.Println("end")
		return 0
	}

	[0-9]+ {
		fmt.Printf("number-1: %v\n", string(in.data[in.token:in.cursor]))
		return 1
	}

	[0-9]+ [-] [0-9]+ {
		fmt.Printf("number-2: %v\n", string(in.data[in.token:in.cursor]))
		return 2
	}

	[ ] {
		return 3
	}
	*/
}

func test(data string) (result int) {
	tmpfile := "input.txt"

	f, _ := os.Create(tmpfile)
	f.WriteString(data)
	f.Seek(0, 0)

	defer func() {
		if r := recover(); r != nil {
			fmt.Println(r)
			result = -2
		}
		f.Close()
		os.Remove(tmpfile)
	}()

	in := &Input{
		file:   f,
		data:   make([]byte, SIZE+1),
		cursor: SIZE,
		marker: SIZE,
		token:  SIZE,
		limit:  SIZE,
		eof:    false,
	}

	result = 9999
	for result > 0 {
		result = Lex(in)
	}

	return
}

func main() {
	var s string

	// Succeeds, the lexer needs 1 character ahead.
	s = "     1234567890     "
	if test(s) != 0 {
		panic("expected 'number: 1234567890'")
	}

	// Fails, the lexer needs 1 character ahead, but there is no space.
	s = "     12345678901    "
	if test(s) != -2 {
		panic("expected 'fill error: lexeme too long'")
	}

	// Succeeds, the lexer needs 1 character ahead.
	s = "     12345-6789     "
	if test(s) != 0 {
		panic("expected 'number: 12345-6789'")
	}

	// Fails, the lexer needs 1 character ahead, but there is no space.
	s = "     12345-67890     "
	if test(s) != -2 {
		panic("expected 'fill error: lexeme too long'")
	}

	// Fails, invalid input.
	s = "?#!*"
	if test(s) != -1 {
		panic("expected 'error'")
	}

	fmt.Println("OK")
}
