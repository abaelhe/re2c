// re2c $INPUT -o $OUTPUT -cg
/*!re2c

<>			{ return NULL; }
<*>		"1"	{ return "1"; }
<*>		"2"	{ return "2"; }
<r1>	"a" { return "a"; }
<r1,r2>	"b" { return "b"; }

*/
