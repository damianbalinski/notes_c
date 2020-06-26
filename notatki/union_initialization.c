#include <stdio.h>

union U {
	int d;
	char s[10];
	double f;
};

void main()
{
	union U a = { 12 };				// inicjalizacja pierwszego skladnika
	union U b = { .f = 1.99 };		// inicjalizacja oznaczona
	union U c = { .s = "xyz" };		// inicjalizacja oznaczona
	union U d = a;					// przypisanie wartosci

	printf("%d\n", a.d);
	printf("%d\n", b.d);
	printf("%d\n", c.d);
	printf("%d\n", d.d);
	putchar('\n');

	printf("%s\n", a.s);
	printf("%s\n", b.s);
	printf("%s\n", c.s);
	printf("%s\n", d.s);
	putchar('\n');

	printf("%f\n", a.f);
	printf("%f\n", b.f);
	printf("%f\n", c.f);
	printf("%f\n", d.f);
}