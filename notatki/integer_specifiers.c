#include <stdio.h>

/* 
 * INTEGERS
 |        type | dec | bin | oxt | hex |
 |        char | %c  |     |     |     |
 |      s char | %hhd|  -  | %hho| %hhx|
 |      u char | %hhu|  -  | %hho| %hhx|
 |       short | %hd |  -  | %ho | %hx |
 |     u short | %hu |  -  | %ho | %hx |
 |         int | %d  |  -  | %o  | %x  |
 |       u int | %u  |  -  | %o  | %x  |
 |        long | %ld |  -  | %lo | %lx |
 |      u long | %lu |  -  | %lo | %lx |
 |   long long | %lld|  -  | %llo| %llx|
 | u long long | %llu|  -  | %llo| %llx|
 */

void main()
{
    char a;
    signed char b;
    unsigned char c;
    short d;
    unsigned short e;
    int f;
    unsigned int g;
    long h;
    unsigned long i;
    long long j;
    unsigned long long k;

    // DECIMAL INTEGERS
    a = 'a';    // NOT
    b = 'a';    // NOT
    c = 'a';    // NOT
    d = 100;    // NOT
    e = 100U;   // NOT
    f = 100;
    g = 100U;
    h = 100L;
    i = 100LU;
    j = 100LL;
    k = 100LLU;

    printf("DECIMAL INTEGERS\n");
    printf("char              : %c\n", a);
    printf("signed char       : %hhd\n", b);
    printf("unsigned char     : %hhu\n", c);
    printf("short             : %hd\n", d);
    printf("unsigned short    : %hu\n", e);
    printf("int               : %d\n", f);
    printf("unsigned int      : %u\n", g);
    printf("long              : %ld\n", h);
    printf("unsigned long     : %lu\n", i);
    printf("long long         : %lld\n", j);
    printf("unsigned long long: %llu\n", k);

    // OCTAL INTEGERS
    //a = '\060';
    //b = 'a';    // NOT
    //c = 'a';    // NOT
    //d = 0100;    // NOT
    //e = 0100U;   // NOT
    //f = 0100;
    //g = 0100U;
    //h = 0100L;
    //i = 0100LU;
    //j = 0100LL;
    //k = 0100LLU;

    //printf("OCTAL INTEGERS\n");
    //printf("char              : %c\n", a);
    //printf("signed char       : %hho\n", b);
    //printf("unsigned char     : %hho\n", c);
    //printf("short             : %ho\n", d);
    //printf("unsigned short    : %ho\n", e);
    //printf("int               : %o\n", f);
    //printf("unsigned int      : %o\n", g);
    //printf("long              : %lo\n", h);
    //printf("unsigned long     : %lo\n", i);
    //printf("long long         : %llo\n", j);
    //printf("unsigned long long: %llo\n", k);

    // HEXADECIMAL INTEGERS
    //a = '\0x60';
    //b = 'a';    // NOT
    //c = 'a';    // NOT
    //d = 0x100;    // NOT
    //e = 0x100U;   // NOT
    //f = 0x100;
    //g = 0x100U;
    //h = 0x100L;
    //i = 0x100LU;
    //j = 0x100LL;
    //k = 0xfffLLU;

    //printf("HEXADECIMAL INTEGERS\n");
    //printf("char              : %c\n", a);
    //printf("signed char       : %hhx\n", b);
    //printf("unsigned char     : %hhx\n", c);
    //printf("short             : %hx\n", d);
    //printf("unsigned short    : %hx\n", e);
    //printf("int               : %x\n", f);
    //printf("unsigned int      : %x\n", g);
    //printf("long              : %lx\n", h);
    //printf("unsigned long     : %lx\n", i);
    //printf("long long         : %llx\n", j);
    //printf("unsigned long long: %llx\n", k);

    // BINARY INTEGERS
    //a = '\0b11'; //NOT
    //b = 'a';     // NOT
    //c = 'a';     // NOT
    //d = 0b100;   // NOT
    //e = 0b100U;  // NOT
    //f = 0b100;
    //g = 0b100U;
    //h = 0b100L;
    //i = 0b100LU;
    //j = 0b100LL;
    //k = 0b100LLU;

    //printf("DECIMAL INTEGERS\n");
    //printf("char              : %c\n", a);
    //printf("signed char       : %hhd\n", b);
    //printf("unsigned char     : %hhu\n", c);
    //printf("short             : %hd\n", d);
    //printf("unsigned short    : %hu\n", e);
    //printf("int               : %d\n", f);
    //printf("unsigned int      : %u\n", g);
    //printf("long              : %ld\n", h);
    //printf("unsigned long     : %lu\n", i);
    //printf("long long         : %lld\n", j);
    //printf("unsigned long long: %llu\n", k);
}