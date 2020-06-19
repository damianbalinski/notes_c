#include <stdio.h>

#define STR "xyz"

void main()
{
	const char a[] = "xyz";
	char b[] = "xyz";
	const char* c = "xyz";
	char* d = "xyz";

	puts(a);
	puts(b);
	puts(c);
	puts(d);
	puts(STR);

	putchar(a[0]);
	putchar(b[0]);
	putchar(c[0]);
	putchar(d[0]);
	putchar("xyz"[0]);
	putchar(STR[0]);
	putchar('\n');

	printf("%p\n", a);
	printf("%p\n", b);
	printf("%p\n", c);
	printf("%p\n", d);
	printf("%p\n", "xyz");
	printf("%p\n", STR);

	// a[0] = '0';		// ERROR
	// a++;				// ERROR

	b[0] = '0';
	// b++;				// ERROR

	//c[0] = '0';		// ERROR
	c++;

	// d[0] = '0';		// UNDEFINED
	d++;

	// "xyz"[0] = '0';	// UNDEFINED
	// "xyz"++;			// ERROR

	// STR[0] = '0';	// UNDEFINED
	// STR++;			// ERROR

}
