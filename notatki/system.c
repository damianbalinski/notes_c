#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("system 1: %d\n", system(NULL));
	printf("system 2: %d\n", system("ls"));
	return 0;
}