#include <stdio.h>
#include <math.h>

#define SINUS(X) _Generic((X), \
	float: sinf, \
	double: sin, \
	long double: sinl \
)(X)

int main()
{
	float a1 = 10.0F;
	double a2 = 10.0;
	long double a3 = (long double)10.0;

	printf("%.20f\n", sinf(a1));
	printf("%.20lf\n", sin(a2));
	printf("%.20Lf\n", sinl(a3));
	putchar('\n');

	printf("%.20f\n", SINUS(a1));
	printf("%.20lf\n", SINUS(a2));
	printf("%.20Lf\n", SINUS(a3));

	return 0;
}