#include <stdio.h>

void print_array(int tab[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", tab[i]);
	putchar('\n');
}

void main()
{
	// FIRST
	int tab1[5];
	print_array(tab1, 5);

	// SECOND
	int tab2[5] = { 0, 1, 2, 3, 4 };
	print_array(tab2, 5);

	// THIRD
	int tab3[] = { 0, 1, 2, 3, 4 };
	print_array(tab3, 5);

	// FOURTH
	int tab4[5] = { 1, 0 };
	print_array(tab4, 5);
}