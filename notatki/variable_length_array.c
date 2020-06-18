#include <stdio.h>

void main()
{
	int n = 10;
	const int k = 10;

	// OK
	int tab1[10];

	// WARNINIG gcc -std=c89
	// ERROR VS
	// int tab2[n];

	// WARNINIG gcc -std=c89
	// ERROR VS
	// int tab3[k];
}