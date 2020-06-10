#include <stdio.h>
#include <limits.h>

void main()
{
	// basic types
	printf("int          : %d\n", sizeof(char));
	printf("signed char  : %d\n", sizeof(signed char));
	printf("unsigned char: %d\n", sizeof(unsigned char));
	printf("shoty        : %d\n", sizeof(short));
	printf("int          : %d\n", sizeof(int));
	printf("long         : %d\n", sizeof(long));
	printf("long long    : %d\n", sizeof(long long));
	printf("float        : %d\n", sizeof(float));
	printf("double       : %d\n", sizeof(double));
	printf("long double  : %d\n", sizeof(long double));
	//printf("void         : %d\n", sizeof(void));     // ERROR

	//TODO __int64
	__int64 aaa = 10;
	int bbb = 10;
	printf("sizeof(int)     = %d\n", sizeof(int));
	printf("sizeof(__int64) = %d\n", sizeof(__int64));
}