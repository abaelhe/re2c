/* Generated by re2c */
#line 1 "unicode_group_Ps.x.re"
#include <stdio.h>
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Ps:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x29D7) {
		if (yych <= 0x2772) {
			if (yych <= 0x2045) {
				if (yych <= 0x0F3B) {
					if (yych <= '[') {
						if (yych == '(') goto yy2;
						if (yych <= 'Z') goto yy4;
					} else {
						if (yych <= '{') {
							if (yych <= 'z') goto yy4;
						} else {
							if (yych != 0x0F3A) goto yy4;
						}
					}
				} else {
					if (yych <= 0x2019) {
						if (yych <= 0x0F3C) goto yy2;
						if (yych != 0x169B) goto yy4;
					} else {
						if (yych <= 0x201D) {
							if (yych >= 0x201B) goto yy4;
						} else {
							if (yych <= 0x201E) goto yy2;
							if (yych <= 0x2044) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x2769) {
					if (yych <= 0x208D) {
						if (yych == 0x207D) goto yy2;
						if (yych <= 0x208C) goto yy4;
					} else {
						if (yych <= 0x2329) {
							if (yych <= 0x2328) goto yy4;
						} else {
							if (yych != 0x2768) goto yy4;
						}
					}
				} else {
					if (yych <= 0x276D) {
						if (yych == 0x276B) goto yy4;
						if (yych >= 0x276D) goto yy4;
					} else {
						if (yych <= 0x276F) {
							if (yych >= 0x276F) goto yy4;
						} else {
							if (yych == 0x2771) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0x2985) {
				if (yych <= 0x27E9) {
					if (yych <= 0x27C5) {
						if (yych == 0x2774) goto yy2;
						if (yych <= 0x27C4) goto yy4;
					} else {
						if (yych <= 0x27E6) {
							if (yych <= 0x27E5) goto yy4;
						} else {
							if (yych != 0x27E8) goto yy4;
						}
					}
				} else {
					if (yych <= 0x27ED) {
						if (yych == 0x27EB) goto yy4;
						if (yych >= 0x27ED) goto yy4;
					} else {
						if (yych <= 0x2982) {
							if (yych >= 0x27EF) goto yy4;
						} else {
							if (yych == 0x2984) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x298E) {
					if (yych <= 0x2989) {
						if (yych == 0x2987) goto yy2;
						if (yych <= 0x2988) goto yy4;
					} else {
						if (yych <= 0x298B) {
							if (yych <= 0x298A) goto yy4;
						} else {
							if (yych != 0x298D) goto yy4;
						}
					}
				} else {
					if (yych <= 0x2993) {
						if (yych <= 0x2990) {
							if (yych >= 0x2990) goto yy4;
						} else {
							if (yych == 0x2992) goto yy4;
						}
					} else {
						if (yych <= 0x2995) {
							if (yych <= 0x2994) goto yy4;
						} else {
							if (yych != 0x2997) goto yy4;
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0xFD3E) {
			if (yych <= 0x300B) {
				if (yych <= 0x2E24) {
					if (yych <= 0x29FB) {
						if (yych == 0x29D9) goto yy4;
						if (yych >= 0x29DB) goto yy4;
					} else {
						if (yych <= 0x2E21) {
							if (yych >= 0x29FD) goto yy4;
						} else {
							if (yych == 0x2E23) goto yy4;
						}
					}
				} else {
					if (yych <= 0x2E28) {
						if (yych == 0x2E26) goto yy2;
						if (yych <= 0x2E27) goto yy4;
					} else {
						if (yych <= 0x3008) {
							if (yych <= 0x3007) goto yy4;
						} else {
							if (yych != 0x300A) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x3016) {
					if (yych <= 0x300F) {
						if (yych == 0x300D) goto yy4;
						if (yych >= 0x300F) goto yy4;
					} else {
						if (yych <= 0x3013) {
							if (yych >= 0x3011) goto yy4;
						} else {
							if (yych == 0x3015) goto yy4;
						}
					}
				} else {
					if (yych <= 0x301C) {
						if (yych <= 0x3018) {
							if (yych <= 0x3017) goto yy4;
						} else {
							if (yych != 0x301A) goto yy4;
						}
					} else {
						if (yych <= 0xD7FF) {
							if (yych >= 0x301E) goto yy4;
						} else {
							if (yych <= 0xDBFF) goto yy6;
							if (yych <= 0xFD3D) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0xFE43) {
				if (yych <= 0xFE3A) {
					if (yych <= 0xFE35) {
						if (yych == 0xFE17) goto yy2;
						if (yych <= 0xFE34) goto yy4;
					} else {
						if (yych <= 0xFE37) {
							if (yych <= 0xFE36) goto yy4;
						} else {
							if (yych != 0xFE39) goto yy4;
						}
					}
				} else {
					if (yych <= 0xFE3E) {
						if (yych == 0xFE3C) goto yy4;
						if (yych >= 0xFE3E) goto yy4;
					} else {
						if (yych <= 0xFE40) {
							if (yych >= 0xFE40) goto yy4;
						} else {
							if (yych == 0xFE42) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0xFF07) {
					if (yych <= 0xFE59) {
						if (yych == 0xFE47) goto yy2;
						if (yych <= 0xFE58) goto yy4;
					} else {
						if (yych <= 0xFE5B) {
							if (yych <= 0xFE5A) goto yy4;
						} else {
							if (yych != 0xFE5D) goto yy4;
						}
					}
				} else {
					if (yych <= 0xFF5B) {
						if (yych <= 0xFF3A) {
							if (yych >= 0xFF09) goto yy4;
						} else {
							if (yych <= 0xFF3B) goto yy2;
							if (yych <= 0xFF5A) goto yy4;
						}
					} else {
						if (yych <= 0xFF5F) {
							if (yych <= 0xFF5E) goto yy4;
						} else {
							if (yych != 0xFF62) goto yy4;
						}
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 11 "unicode_group_Ps.x.re"
	{ goto Ps; }
#line 238 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Ps.x.re"
	{ return YYCURSOR == limit; }
#line 244 "<stdout>"
yy6:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy5;
	if (yych <= 0xDFFF) goto yy4;
	goto yy5;
}
#line 13 "unicode_group_Ps.x.re"

}
static const char buffer_Ps [] = "\x28\x00\x5B\x00\x7B\x00\x3A\x0F\x3C\x0F\x9B\x16\x1A\x20\x1E\x20\x45\x20\x7D\x20\x8D\x20\x29\x23\x68\x27\x6A\x27\x6C\x27\x6E\x27\x70\x27\x72\x27\x74\x27\xC5\x27\xE6\x27\xE8\x27\xEA\x27\xEC\x27\xEE\x27\x83\x29\x85\x29\x87\x29\x89\x29\x8B\x29\x8D\x29\x8F\x29\x91\x29\x93\x29\x95\x29\x97\x29\xD8\x29\xDA\x29\xFC\x29\x22\x2E\x24\x2E\x26\x2E\x28\x2E\x08\x30\x0A\x30\x0C\x30\x0E\x30\x10\x30\x14\x30\x16\x30\x18\x30\x1A\x30\x1D\x30\x3E\xFD\x17\xFE\x35\xFE\x37\xFE\x39\xFE\x3B\xFE\x3D\xFE\x3F\xFE\x41\xFE\x43\xFE\x47\xFE\x59\xFE\x5B\xFE\x5D\xFE\x08\xFF\x3B\xFF\x5B\xFF\x5F\xFF\x62\xFF\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Ps), reinterpret_cast<const YYCTYPE *> (buffer_Ps + sizeof (buffer_Ps) - 1)))
		printf("test 'Ps' failed\n");
}