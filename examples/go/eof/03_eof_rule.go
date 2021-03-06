// Code generated by re2c, DO NOT EDIT.
//line "go/eof/03_eof_rule.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

import "testing"

// Expects a null-terminated string.
func lex(str string) int {
	var cursor, marker int
	limit := len(str) - 1 // limit points at the terminating null
	count := 0
loop:
	
//line "go/eof/03_eof_rule.go":16
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case ' ':
		goto yy4
	case '\'':
		goto yy7
	default:
		if (limit <= cursor) {
			goto yyeof1
		}
		goto yy2
	}
yy2:
	cursor += 1
yy3:
//line "go/eof/03_eof_rule.re":22
	{ return -1 }
//line "go/eof/03_eof_rule.go":36
yy4:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case ' ':
		goto yy4
	default:
		goto yy6
	}
yy6:
//line "go/eof/03_eof_rule.re":25
	{ goto loop }
//line "go/eof/03_eof_rule.go":49
yy7:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	if (yych >= 0x01) {
		goto yy9
	}
	if (limit <= cursor) {
		goto yy3
	}
yy8:
	cursor += 1
	yych = str[cursor]
yy9:
	switch (yych) {
	case '\'':
		goto yy10
	case '\\':
		goto yy12
	default:
		if (limit <= cursor) {
			goto yy13
		}
		goto yy8
	}
yy10:
	cursor += 1
//line "go/eof/03_eof_rule.re":24
	{ count += 1; goto loop }
//line "go/eof/03_eof_rule.go":79
yy12:
	cursor += 1
	yych = str[cursor]
	if (yych <= 0x00) {
		if (limit <= cursor) {
			goto yy13
		}
		goto yy8
	}
	goto yy8
yy13:
	cursor = marker
	goto yy3
yyeof1:
//line "go/eof/03_eof_rule.re":23
	{ return count }
//line "go/eof/03_eof_rule.go":96
}
//line "go/eof/03_eof_rule.re":26

}

func TestLex(t *testing.T) {
	var tests = []struct {
		res int
		str string
	}{
		{0, "\000"},
		{3, "'qu\000tes' 'are' 'fine: \\'' \000"},
		{-1, "'unterminated\\'\000"},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			res := lex(x.str)
			if res != x.res {
				t.Errorf("got %d, want %d", res, x.res)
			}
		})
	}
}
