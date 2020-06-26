#include <stdio.h>

union A {
	int i;
	float f;
};

union B {
	int i;
	float f;
} b;

union {
	int i;
	float f;
} c;

union {
	int i;
	float f;
};

union A a = { .f = 10. };

int main()
{
	printf("%d\n", a.i);
	printf("%d\n", b.i);
	printf("%d\n", c.i);

	printf("%f\n", a.f);
	printf("%f\n", b.f);
	printf("%f\n", c.f);

	return 0;
}