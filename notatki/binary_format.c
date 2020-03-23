#include <stdio.h>
#include <limits.h>

#define BYTE 8
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

typedef enum
{
    INT = sizeof(int),
    FLOAT = sizeof(float),
    CHAR = sizeof(char),
	DOUBLE = sizeof(double),
} type;
void binary(void* ptr, int typ)
{
	//little endian
    char* p = ptr;
    p += (typ - 1);
    printf("binary : ");
    for (int i = 0; i < typ; i++)
    {
        printf(BYTE_TO_BINARY_PATTERN" ", BYTE_TO_BINARY(*p));
        p--;
    }
    printf("\n");
}

void main()
{
	// liczby sa zapisywane w konwencji little indian - najpierw najmniej znaczacy bit
    int a = UINT_MAX;
    printf("decimal: %u\n", a);
    binary(&a, INT);

    float b = 1.11111111;
    printf("decimal: %f\n", b);
    binary(&b, FLOAT);

    double c = 1.11111111;
    printf("decimal: %lf\n", c);
    binary(&c, DOUBLE);

    char d = 'A';
    printf("char: %c\n", d);
    binary(&d, CHAR);

	//lancuchy znakowe sa przechowywane jeden po drugim w kolejnosci deklarowania
    char e[] = "AABBB";
    printf("string: %s\n", e);
    binary(&e, CHAR*5);
	
    //int a = 1024;
    //printf("8 == "BYTE_TO_BINARY_PATTERN BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(a>>8), BYTE_TO_BINARY(a));
    //char t[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz012345678";
    //char t[] = "ABC";
    //int n = sizeof(t) / sizeof(char) - 1;
    //printf("n: %d\n", n);
    
    //for (int i = 0; i < n; i++)
    //    printf("%c : "BYTE_TO_BINARY_PATTERN"\n", t[i], BYTE_TO_BINARY(t[i]));
}