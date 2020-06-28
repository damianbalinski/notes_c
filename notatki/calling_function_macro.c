#include <stdio.h>

#define test1(X) ((X)*(X))

int test2(int x)
{
	return x;
}

int main()
{
	// macro
	printf("%d\n", test1(10));
	//printf("%d\n", (test1)(10));		// ERROR
	//printf("%d\n", (*test1)(10));		// ERROR

	// function
	printf("%d\n", test2(10));
	printf("%d\n", (test2)(10));
	printf("%d\n", (*test2)(10));
	return 0;
}