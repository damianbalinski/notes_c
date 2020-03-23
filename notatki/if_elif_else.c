#include <stdio.h>

#define X 1

#if X == 100
	#define X 200
#elif X == 1
	#define X 1000
#endif
void main()
{
	printf("X: %d\n", X);
}
