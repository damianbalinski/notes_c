#include <stdio.h>
#include <stdalign.h>

typedef struct {
	long a[6];
} temp;

int main()
{
	printf("%zd\n", _Alignof(char) );
	printf("%zd\n", _Alignof(short));
	printf("%zd\n", _Alignof(int));
	printf("%zd\n", _Alignof(long));
	printf("%zd\n", _Alignof(long long));
	printf("%zd\n", _Alignof(float));
	printf("%zd\n", _Alignof(double));
	printf("%zd\n", _Alignof(long double));
	putchar('\n');

	// GCC
	printf("%zd\n", alignof(char));
	printf("%zd\n", alignof(short));
	printf("%zd\n", alignof(int));
	printf("%zd\n", alignof(long));
	printf("%zd\n", alignof(long long));
	printf("%zd\n", alignof(float));
	printf("%zd\n", alignof(double));
	printf("%zd\n", alignof(long double));
	putchar('\n');

	return 0;
}