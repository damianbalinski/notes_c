#include <stdio.h>

void main()
{
	printf("wartosc: %s\n", 5 > 3 ? "Tak" : "Nie");
	printf("wartosc: %s\n", 2 > 3 ? "Tak" : "Nie");

	float a, b;
	b = (a = 0.0) ? 0.25 : 0.75;
	printf("%f\n", b);
	b = (a = 2.0) ? 0.25 : 0.75;
	printf("%f\n", b);
}