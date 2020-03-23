#include <stdio.h>

void main()
{
	#define MAX 50
	printf("MAX: %d\n", MAX);

	#define MAX 100
	printf("MAX: %d\n", MAX);

	#undef MAX
	// anulowanie dyrektywy #define, dozwolone nawet jesli MAX nie bylo jeszcze okreslone
	//printf("MAX: %d\n", MAX);
}