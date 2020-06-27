#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * ptr = aligned_alloc(1024, 1024 * sizeof(int));
	
	for (int i = 0; i < 10; i++)
		ptr[i] = i;

	for (int i = 0; i < 10; i++)
		printf("%d\n", ptr[i]);

	return 0;
}