#include <stdio.h>
#include <stddef.h>

typedef struct
{
	short a;
	int b;
	float c;
	double d;
} S;

int main(void)
{
	printf("%zd\n", offsetof(S, a));
	printf("%zd\n", offsetof(S, b));
	printf("%zd\n", offsetof(S, c));
	printf("%zd\n", offsetof(S, d));

	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));

	return 0;
}