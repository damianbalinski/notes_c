#include <stdio.h>
#include <string.h>
#include <stdint.h>

void main()
{
	int a = 100000;
	signed char b = 'c';
	short c = 10;
	long d = 100;
	long long e = 10000;
	intmax_t f = 1;
	size_t g = 12;
	ptrdiff_t h = 12;
	
	printf("%d\n", a);
	printf("%hhd\n", b);
	printf("%hd\n", c);
	printf("%ld\n", d);
	printf("%lld\n", e);
	printf("%jd\n", f);		// intmax_t, uintmax_t
	printf("%zd\n", g);		// size_t
	printf("%td\n", h);		// ptrdiff_t
}