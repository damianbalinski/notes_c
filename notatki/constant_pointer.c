#include <stdio.h>

void print_table(int* tab, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", tab[i]);
	printf("\n");
}

void main()
{
	int tab1[] = { 1, 2, 3 };
	const int tab2[] = { 4, 5, 6 };
	int n = 3;

	int* p1;
	const int* p2;

	// OK
	tab1[2] = 400;

	/*
	 * ERROR - kompilator jest w stanie wykryc probe dostepu do 
	 * pamieci tylko do odczytu
	 */		
	//tab2[2] = 400;

	/*
	 * UNDEFINED - kompilator nie jest w stanie wykryc proby modyfikacji 
	 * pamieci tylko do odczytu, dzialanie jest niezdefiniowane.
	 */
	//*((int*)tab2) = 400;

	// OK
	p1 = tab1;
	*p1 = 100;
	print_table(tab1, n);

	// UNDEFINED
	p1 = tab2;
	*p1++ = 200;
	*p1++ = 300;
	*p1++ = 900;
	print_table(tab2, n);

	// ERROR
	//p2 = tab1;
	//*p2 = 200;
	//print_table(tab1, n);

	// ERROR
	//p2 = tab2;
	//*p2 = 200;
	//print_table(tab2, n);
}
