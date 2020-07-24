#include <stdio.h>
#define MAX 3

void print_array(int tab[], int n)
{
	putchar('{');
	for (int i = 0; i < n; i++)
		printf("%d ", tab[i]);

	putchar('}');
	putchar('\n');
}

void print_array_2D(int tab[][MAX], int n)
{
	putchar('{');
	for (int i = 0; i < n; i++)
	{
		putchar('{');
		for(int j = 0; j < MAX; j++)
			printf("%d ", tab[i][j]);
		putchar('}');
	}

	putchar('}');
	putchar('\n');
}

void main()
{
	// ONE DIMENSION
	int tab0[] = { 0, 1, 2, 3, 4 };
	int tab1[] = { [2] = 10,[8] = 99, 100 };
	int tab2[] = { [2]10,[8]99, 100 };					// GCC ONLY
	int tab3[] = { [0 ... 5] = 5, 6,[8 ... 9] = 7 };	// GCC ONLY
	int tab4[] = { [0 ... 5]7, -1,[8 ... 9]9 };			// GCC ONLY

	int n0 = sizeof(tab0) / sizeof(tab0[0]);
	int n1 = sizeof(tab1) / sizeof(tab1[0]);
	int n2 = sizeof(tab2) / sizeof(tab2[0]);
	int n3 = sizeof(tab3) / sizeof(tab3[0]);
	int n4 = sizeof(tab4) / sizeof(tab4[0]);


	// MULTI DIMENSIONS
	int mul0[][3] = { {0, 1, 2}, {4, 5, 6} };

	int k0 = sizeof(mul0) / sizeof(mul0[0]);


	// PRINT
	print_array(tab0, n0);
	print_array(tab1, n1);
	print_array(tab2, n2);
	print_array(tab3, n3);
	print_array(tab4, n4);
	
	print_array_2D(mul0, k0);
}