#include <stdio.h>
#include <stdint.h>

void main()
{
	intptr_t a;
	uintptr_t b;
	ptrdiff_t c;
	size_t d;

	printf("intptr_t : %d\n", sizeof(intptr_t));
	printf("uintptr_t: %d\n", sizeof(uintptr_t));
	printf("ptrdiff_t: %d\n", sizeof(ptrdiff_t));
	printf("size_t   : %d\n", sizeof(size_t));
}