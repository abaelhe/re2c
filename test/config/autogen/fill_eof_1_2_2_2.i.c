/* Generated by re2c */
// re2c:eof = 0;
// re2c:define:YYFILL = "fill(need);";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:check = 1;

{
	YYCTYPE yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (fill(need); () == 0) goto yyFillLabel0;
			goto yyeofrule1;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
	{ x }
yy4:
	++YYCURSOR;
	{ a }
yyeofrule1:
	{ eof }
}

