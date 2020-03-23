//#include <cstdint>
#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

void main()
{
	int a = 100000;
	signed char b = 'c';
	short c = 10;
	long d = 100;
	long long e = 10000;
	//intmax_t f = 1;
	size_t g = 12;
	ptrdiff_t h = 12;
	
	printf("%d\n", a);
	printf("%hhd\n", a);
	printf("%hd\n", a);
	printf("%ld\n", a);
	printf("%lld\n", a);
	printf("%jd\n", a);
	printf("%zd\n", a);
	printf("%td\n", a);
}