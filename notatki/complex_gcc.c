#include <stdio.h>
#include <complex.h>

void print_double_complex(double complex c)
{
    printf("complex: %.2lf + %.2lfi\n", creal(c), cimag(c));
}

void print_float_complex(float complex c)
{
    printf("complex: %.2f + %.2fi\n", crealf(c), cimagf(c));
}

void print_long_complex(long double complex c)
{
    printf("complex: %.2f + %.2fi\n", creal(c), cimag(c));
}

void main()
{
    // double complex
    double complex d1 = 3.2 + 4.1 * I;
    double complex d2 = 10.0 + 10.0 * I;
    double complex d3 = d1 + d2;
    print_double_complex(d1);
    print_double_complex(d2);
    print_double_complex(d3);
    printf("\n");

    // float complex
    float complex f1 = 3.2 + 4.1 * I;
    float complex f2 = 10.0 + 10.0 * I;
    float complex f3 = f1 + f2;
    print_float_complex(f1);
    print_float_complex(f2);
    print_float_complex(f3);
    printf("\n");

    // long double complex
    long double complex l1 = 3.2 + 4.1 * I;
    long double complex l2 = 10.0 + 10.0 * I;
    long double complex l3 = l1 + l2;
    print_long_complex(l1);
    print_long_complex(l2);
    print_long_complex(l3);
    printf("\n");
}