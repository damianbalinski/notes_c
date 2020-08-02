#include <stdio.h>

int main(void)
{
	// ZMIENNA & STALA
	int val1 = 1;
	const int val2 = 2;

	// ZWYKLY WSKAZNIK
	int* a1;
	int* a2;
	a1 = &val1;
	a2 = &val2;

	// WSKAZNIK DO STALEJ
	const int* b1;
	const int* b2;
	b1 = &val1;
	b2 = &val2;

	// STALY WSKAZNIK - musi zostac zainicjalizowany podczas deklaracji
	int* const c1 = &val1;
	int* const c2 = &val2;

	// STALY WSKAZNIK DO STALEJ - musi zostac zainicjalizowany podczas dekaracji
	const int* const d1 = &val1;
	const int* const d2 = &val2;

	printf("%p\n", a1);
	printf("%p\n", a2);
	printf("%p\n", b1);
	printf("%p\n", b2);
	printf("%p\n", c1);
	printf("%p\n", c2);
	printf("%p\n", d1);
	printf("%p\n", d2);

	return 0;
}