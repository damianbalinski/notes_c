#include <stdio.h>
#include <stdlib.h>
#define STR "10"

void main()
{
	char a1;
	short a2;
	int a3;
	long a4;
	long long a5;

	float b1;
	double b2;
	long double b3;

	// ATO FUNCTIONS
	a3 = atoi(STR);
	a4 = atol(STR);
	a5 = atoll(STR);
	b2 = atof(STR);

	printf("%d\n", a3);
	printf("%ld\n", a4);
	printf("%lld\n", a5);
	printf("%f\n", b2);
}