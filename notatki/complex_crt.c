#include <stdio.h>
#include <complex.h>

void print_double_complex(_Dcomplex c)
{
	printf("%.2lf + %.2lfi\n", creal(c), cimag(c));
}

void print_float_complex(_Fcomplex c)
{
	printf("%.2f + %.2fi\n", crealf(c), cimagf(c));
}

void print_long_complex(_Lcomplex c)
{
	printf("%.2Lf + %.2Lfi\n", creall(c), cimagl(c));
}

void main()
{
	// double complex
	_Dcomplex d1 = _Cbuild(1.0, 1.0);
	_Dcomplex d2 = _Cbuild(10.0, 10.0);
	_Dcomplex d3 = _Cbuild(0.0, 0.0);
	d3._Val[0] = d1._Val[0] + d2._Val[0];
	d3._Val[1] = d1._Val[1] + d2._Val[1];
	print_double_complex(d1);
	print_double_complex(d2);
	print_double_complex(d3);
	printf("\n");

	// float complex
	_Fcomplex f1 = _FCbuild(1.0, 1.0);
	_Fcomplex f2 = _FCbuild(10.0, 10.0);
	_Fcomplex f3 = _FCbuild(0.0, 0.0);
	f3._Val[0] = f1._Val[0] + f2._Val[0];
	f3._Val[1] = f1._Val[1] + f2._Val[1];
	print_float_complex(f1);
	print_float_complex(f2);
	print_float_complex(f2);
	printf("\n");

	// long double complex
	_Lcomplex l1 = _LCbuild(1.0, 1.0);
	_Lcomplex l2 = _LCbuild(10.0, 10.0);
	_Lcomplex l3 = _LCbuild(0.0, 0.0);
	l3._Val[0] = l1._Val[0] + l2._Val[0];
	l3._Val[1] = l1._Val[1] + l2._Val[1];
	print_long_complex(l1);
	print_long_complex(l2);
	print_long_complex(l2);
	printf("\n");
}