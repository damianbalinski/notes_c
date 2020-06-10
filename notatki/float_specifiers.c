#include <stdio.h>

/*
 * FLOATS
 |       type | dec | bin | oxt | hex |
 |      float | %f  |     |     |     |
 |     double | %lf |     |     |     |
 |   l double | %Lf |     |     |     |
 */

void main()
{
    float a;
    double b;
    long double c;

    // DECIMAL FLOATINGPOINTS
    //a = 100.0;
    //b = 100.0;
    //c = 100.0;

    //a = 1e2F;
    //b = 1e2;
    //c = 1e2L;

    //printf("%.15f\n", a);
    //printf("%.15lf\n", b);
    //printf("%.15Lf\n", c);

    // HEXADECIMAL FLOATINGPOINTS
    a = 0xABp2F;
    b = 0xABp2;
    c = 0xABp2L;

    printf("%.15f\n", a);
    printf("%.15lf\n", b);
    printf("%.15Lf\n", c);
}