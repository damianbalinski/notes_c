#include <stdio.h>

#define STR(X) #X

#define EVALUATE(X) #X
#define STR2(X) EVALUATE(X)

int V = 100;

int main()
{
	printf("%d\n", V);
	printf("%s\n", STR(V));
	printf("%s\n", STR2(V));

	printf("%d\n", 100);
	printf("%s\n", STR(100));
	printf("%s\n", STR2(100));

	return 0;
}