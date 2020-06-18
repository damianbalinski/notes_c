#include <stdio.h>

void main()
{
	int a1, a2;
	int * p1, * p2;

	ptrdiff_t d1;
	ptrdiff_t d2;

	p1 = &a1;
	p2 = &a2;

	d1 = p1 - p2;
	d2 = p2 - p1;

	printf("%p\n", p1);
	printf("%p\n", p2);

	printf("%td\n", d1);
	printf("%td\n", d2);
}