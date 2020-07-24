#include <stdio.h>

struct S {
	int val;
	char str[10];
};

int main()
{
	// inicjalizacja normalna
	struct S a = {
		10,
		"abc",
	};

	// inicjalizacja oznaczona
	struct S b = {
		.val = 11,
		.str = "xyz",
	};

	struct S c = {
		.str = "qwe",
		.val = 12,
	};

	// inicjator zwykly odnosi sie do nastepnego skalnika po inicjatorze oznaczonym
	struct S d = {
		.val = 13,
		"iop"
	};

	// przypisanie wartosci
	struct S e = d;

	// GCC ONLY
	struct S f = {
		val : 124,
		"aaa"
	};

	printf("%d %s\n", a.val, a.str);
	printf("%d %s\n", b.val, b.str);
	printf("%d %s\n", c.val, c.str);
	printf("%d %s\n", d.val, d.str);
	printf("%d %s\n", e.val, e.str);
	printf("%d %s\n", f.val, f.str);

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d);
	printf("%p\n", &e);
	printf("%p\n", &f);

	return 0;
}