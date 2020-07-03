#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <errno.h>
#include <string.h>

#define MYERROR "My Error"
static int a = 10;
int b = 10;

int main()
{
	for (int i = 0; i < 100; i++)
		printf("error %d: %s\n", i, strerror(i));

	int* c = (int*)malloc(sizeof(int));
	int d = 10;

	printf("%p\n", MYERROR);
	printf("%p\n", strerror(2));
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", c);
	printf("%p\n", &d);

	printf("errno: %d\n", errno);
	FILE* file = fopen("dasdasdas", "r");
	printf("errno: %d\n", errno);

	return 0;
}