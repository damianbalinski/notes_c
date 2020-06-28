#include <stdio.h>
#include <math.h>

// function name, then call
#define SINUS(X) _Generic((X), \
	float: sinf, \
	default: sin, \
	long double: sinl \
)(X)

// function call
#define COSINUS(X) _Generic((X), \
	float: cosf(X), \
	default: cos(X), \
	long double: cosl(X) \
)

int main()
{
	float a1 = 10.0F;
	double a2 = 10.0;
	long double a3 = 10.0L;

	printf("%.20f\n", sinf(a1));
	printf("%.20lf\n", sin(a2));
	printf("%.20Lf\n", sinl(a3));
	putchar('\n');

	printf("%.20f\n", SINUS(a1));
	printf("%.20lf\n", SINUS(a2));
	printf("%.20Lf\n", SINUS(a3));
	putchar('\n');

	printf("%.20f\n", cosf(a1));
	printf("%.20lf\n", cos(a2));
	printf("%.20Lf\n", cosl(a3));
	putchar('\n');

	printf("%.20f\n", COSINUS(a1));
	printf("%.20lf\n", COSINUS(a2));
	printf("%.20Lf\n", COSINUS(a3));
	putchar('\n');

	return 0;
}