#include <stdio.h>
#include <stdlib.h>
#define a "abc"

static int b = 100;
int c = 100;

static _Thread_local int b2 = 100;
_Thread_local int c2 = 100;

int main()
{
	auto int d = 100;
	int* e = (int*)malloc(sizeof(int));

	static _Thread_local int d2 = 100;

	printf("a: %p\n", a);
	printf("b: %p\n", &b);
	printf("c: %p\n", &c);
	printf("d: %p\n", &d);
	printf("e: %p\n", e);
	putchar('\n');

	printf("b2: %p\n", &b2);
	printf("c2: %p\n", &c2);
	printf("d2: %p\n", &d2);

	printf("%d\n", e);
}