#include <stdio.h>

void print_array(int tab[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", tab[i]);
	putchar('\n');
}

void main()
{
	int tab1[10] = { [2] = 10,[8] = 99, 100 };
	print_array(tab1, 10);

	// GCC ONLY
	//int tab2[10] = { [2] 10, [8]99, 100 };
	//print_array(tab2, 10);

	// GCC ONLY
	//int tab3[] = { [0 ... 5] = 5, 6, [8 ... 9] = 7 };
	//print_array(tab3, 10);
}