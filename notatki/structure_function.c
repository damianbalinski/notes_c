#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX 100
#pragma warning(disable : 4996)

struct osoba
{
	char imie[MAX];
	int liczba;
	char* napis;
};

void zmien_napis(struct osoba* osoby, int n, char napis[])
{
	for (int i = 0; i < n; i++, osoby++) // rownoczesna zmiana wielu argumentow pentli
		osoby->napis = napis;
}

void main()
{
	struct osoba osoby[2] = {
		{
			"Jan",
			12,
			"napis"
		},
	{
			"Kazik",
		99999
	}
	};

	char napis2[] = "napisssss";

	
	printf("imie: %s, \tliczba: %d\n", osoby[0].imie, osoby[0].liczba);
	printf("imie: %s, \tliczba: %d\n", osoby[1].imie, osoby[1].liczba);
	
	printf("imie: %s, \tliczba: %d\n", (*osoby).imie, (*osoby).liczba);
	printf("imie: %s, \tliczba: %d\n", (*(osoby+1)).imie, (*(osoby+1)).liczba);

	printf("napis: %s\n", osoby[1].napis);
	printf("napis: %s\n", napis2);

	osoby[2].napis = napis2;
	printf("napis: %s\n", osoby[2].napis);

	zmien_napis(osoby, 2, "Nowy_napis");

	printf("napis: %s\n", osoby[0].napis);
	printf("napis: %s\n", osoby[1].napis);
	
}