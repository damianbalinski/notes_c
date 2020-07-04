#include <stdio.h>

// DIGRAPHS - zamieniane przez kompilator nawet 
// wewnatrz stalych znakowych i lacuchowych

int main(void)
{
	puts("<:");		// [
	puts(":>");		// ]
	puts("<%");		// {
	puts("%>");		// }
	puts("%:");		// #
	puts("%:%:");	// ##

	return 0;
}