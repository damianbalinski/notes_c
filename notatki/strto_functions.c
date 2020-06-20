#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#define STR "123"
#define STR2 "12.34"

int main()
{
	long a1;
	unsigned long a2;
	long long a3;
	unsigned long long a4;

	float b1;
	double b2;
	long double b3;

	intmax_t c1;
	uintmax_t c2;

	// STRTO FUNCTIONS
	a1 = strtol(STR, NULL, 10);
	a2 = strtoul(STR, NULL, 10);
	a3 = strtoll(STR, NULL, 10);
	a4 = strtoull(STR, NULL, 10);

	b1 = strtof(STR2, NULL);
	b2 = strtod(STR2, NULL);
	b3 = strtold(STR2, NULL);

	c1 = strtoimax(STR, NULL, 10);
	c2 = strtoumax(STR, NULL, 10);

	printf("%ld\n", a1);
	printf("%lu\n", a2);
	printf("%lld\n", a3);
	printf("%llu\n", a4);

	printf("%f\n", b1);
	printf("%lf\n", b2);
	printf("%Lf\n", b3);

	printf("%jd\n", c1);
	printf("%ju\n", c2);

	// STROTO TEST
	char* ptr;
	char str[] = "1234abc";
	long num;

	num = strtol(str, &ptr, 10);
	printf("num: %d\n", num);
	printf("char: %c\n", *ptr);
	printf("rest: %s\n", ptr);

	return 0;
}