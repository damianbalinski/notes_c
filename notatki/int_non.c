#include <stdio.h>
#include <stdlib.h>

int main()
{
	// infinity
	printf("%f\n", strtof("inf", NULL));
	printf("%lf\n", strtod("inf", NULL));
	printf("%Lf\n", strtold("inf", NULL));

	// not a number
	printf("%f\n", strtof("nan", NULL));
	printf("%lf\n", strtod("nan", NULL));
	printf("%Lf\n", strtold("nan", NULL));

	return 0;
}