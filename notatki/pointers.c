#include <stdio.h>
#define NAME(X) #X

void main()
{
	int int_1 = 10;
	int int_2 = 20;
	int* int_ptr1 = &int_1;
	int* int_ptr2 = &int_2;
	
	//printf("int_1  : %25p\n", &int_1);
	//printf("int_1  : %25p\n", &int_2);
	//printf("int_1 x: %25X\n", &int_1);
	//printf("int_2 x: %25X\n", &int_2);
	//printf("int_1  : %25p\n", int_ptr1);
	//printf("int_1  : %25p\n", int_ptr2);

	char _char = 'a';
	unsigned char _unsigned_char = 'a';
	signed char _signed_char = 'a';

	printf("CHARS\n");
	printf("%25s: %25X\n", NAME(_char), &_char);
	printf("%25s: %25p\n", NAME(_char), &_char);
	printf("%25s: %25X\n", NAME(_unsigned_char), &_unsigned_char);
	printf("%25s: %25p\n", NAME(_unsigned_char), &_unsigned_char);
	printf("%25s: %25X\n", NAME(_signed_char), &_signed_char);
	printf("%25s: %25p\n", NAME(_signed_char), &_signed_char);

	
	unsigned short int _unsigned_short_int = 10;
	signed short int _signed_short_int = 10;
	unsigned int _unsigned_int = 10;
	signed _signed_int = 10;
	signed long int _signed_long_int = 10;
	unsigned long int _unsigned_long_int = 10;
	signed long long int _signed_long_long_int = 10;
	unsigned long long int _unsigned_long_long_int = 10;

	printf("INTS\n");
	printf("%25s: %25X\n", NAME(_unsigned_short_int), &_unsigned_short_int);
	printf("%25s: %25p\n", NAME(_unsigned_short_int), &_unsigned_short_int);
	printf("%25s: %25X\n", NAME(_signed_short_int), &_signed_short_int);
	printf("%25s: %25p\n", NAME(_signed_short_int), &_signed_short_int);
	printf("%25s: %25X\n", NAME(_unsigned_int), &_unsigned_int);
	printf("%25s: %25p\n", NAME(_unsigned_int), &_unsigned_int);
	printf("%25s: %25X\n", NAME(_signed_int), &_signed_int);
	printf("%25s: %25p\n", NAME(_signed_int), &_signed_int);
	printf("%25s: %25X\n", NAME(_unsigned_long_int), &_unsigned_long_int);
	printf("%25s: %25p\n", NAME(_unsigned_long_int), &_unsigned_long_int);
	printf("%25s: %25X\n", NAME(_signed_long_int), &_signed_long_int);
	printf("%25s: %25p\n", NAME(_signed_long_int), &_signed_long_int);
	printf("%25s: %25X\n", NAME(_unsigned_long_long_int), &_unsigned_long_long_int);
	printf("%25s: %25p\n", NAME(_unsigned_long_long_int), &_unsigned_long_long_int);
	printf("%25s: %25X\n", NAME(_signed_long_long_int), &_signed_long_long_int);
	printf("%25s: %25p\n", NAME(_signed_long_long_int), &_signed_long_long_int);

	float _float = 1.0;
	double _double = 1.0;
	long double _long_double = 1.0;

	printf("FLOATS\n");
	printf("%25s: %25X\n", NAME(_float), &_float);
	printf("%25s: %25p\n", NAME(_float), &_float);
	printf("%25s: %25X\n", NAME(_double), &_double);
	printf("%25s: %25p\n", NAME(_double), &_double);
	printf("%25s: %25X\n", NAME(_long_double), &_long_double);
	printf("%25s: %25p\n", NAME(_long_double), &_long_double);
}