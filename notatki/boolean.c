#include <stdio.h>
#include <stdbool.h>

void main()
{
	// typ bool ma rozmiar 1
	bool is_true = true;
	bool is_false = false;

	printf("%d\n", sizeof(_Bool));
	printf("%d\n", sizeof(bool));

	printf("%d\n", is_true);
	printf("%d\n", is_false);
}