#include <stdio.h>

int main(void)
{
	int* a1 = NULL;
	const int* a2 = NULL;

	int* b1 = NULL;
	const int* b2 = NULL;

	b1 = a1;
	b1 = a2;

	b2 = a1;
	b2 = a2;

	return 0;
}