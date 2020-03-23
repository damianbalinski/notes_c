#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

void main()
{
	char ster[] = "liczba: %d\n";
	printf(ster, 12);
	
	//wyrownanie
	printf("%-20s\n", "napis");
	printf("%20s\n", "napis");
	printf("%-20d\n", 19);
	printf("%20d\n", 19);

	//znak
	printf("%d\t%d\n", -10, 10);
	printf("% d\t% d\n", -10, 10);
	printf("%+d\t%+d\n", -10, 10);

	//inne
	printf("%010d\n", 10);
	printf("%x\n", 123);
	printf("%#x\n", 123);

	//szerokosc
	printf("%5s\n", "xxxx");
	printf("%5s\n", "xxxxxxxxx");
	printf("%5s\n", "xx");
	printf("%*s\n", 10,"xx");

	//precyzja
	printf("%.2f\n", 12.123);
	printf("%.2d\n", 1);
	printf("%.4d\n", 1);
	printf("%.*f\n", 3, 1.111111);
	printf("%-10.2s\n", "aaaa");
	printf("%10.2s\n", "aaaa");

	printf("Dlugi"
		"lancuch");
	printf("Dlugi \
		lancuch");
}