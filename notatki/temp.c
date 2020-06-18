#include <stdio.h>
#include <stdio.h>

void main()
{
	int tab1[10];
	int* tab2 = (int*)malloc(10 * sizeof(int));
	int* tab3 = 10;

	//tab1++;	// ERROR
	tab2++;
	tab3++;		// ERROR

	printf("%p\n", tab3);
}