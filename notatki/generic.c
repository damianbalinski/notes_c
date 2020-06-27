#include <stdio.h>

#define MYTYPE(X)_Generic((X),\
    unsigned char       : "unsigned char", \
    signed char         : "signed char", \
    char                : "char", \
    unsigned short      : "unsigned short", \
    signed short        : "short", \
    unsigned int        : "unsigned int",\
    signed int          : "int",\
    unsigned long       : "unsigned long", \
    signed long         : "long", \
    unsigned long long  : "unsigned long long", \
    long long           : "long long", \
    float               : "float",\
    double              : "double",\
    long double         : "long double", \
    default             : "OTHER" \
)

void main()
{
    unsigned char a1;
    signed char a2;
    char a3;

    unsigned short b1;
    short b2;

    unsigned int c1;
    int c2;

    unsigned long d1;
    long d2;

    unsigned long long e1;
    long long e2;

    printf("%s\n", MYTYPE(a1));
    printf("%s\n", MYTYPE(a2));
    printf("%s\n", MYTYPE(a3));
    printf("%s\n", MYTYPE(b1));
    printf("%s\n", MYTYPE(b2));
    printf("%s\n", MYTYPE(c1));
    printf("%s\n", MYTYPE(c2));
    printf("%s\n", MYTYPE(d1));
    printf("%s\n", MYTYPE(d2));

    double temp;

    int res = _Generic(temp,
        char: 0,
        int : 1,
        float : 2,
        default: 3
    );

    printf("res: %d\n", res);
}
