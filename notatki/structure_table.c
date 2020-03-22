#include <string.h>
#include <stdio.h>

#define MAX 100
#pragma warning(disable : 4996)

struct osoba
{
	int wiek;
	char imie[MAX];
};

void zmien_wszystkie_lata(struct osoba* osoby, int n)
{
	for (int i = 0; i < n; i++)
		//osoby[i].wiek = 999;
		(*(osoby + i)).wiek = 999;
}

void zmien_wszystkie_imiona(struct osoba osoby[], int n)
{
	int i = 0;
	while(i < 2)
		strcpy(osoby[i++].imie, "Temp");
}

void main()
{
	struct osoba osoby[] = {
	{
		12,
		"Janek"
	},
	{
		100,
		"Witek"
	}
	};

	for (int i = 0; i < 2; i++)
		printf("imie: %s\t wiek: %d\n", osoby[i].imie, osoby[i].wiek);

	zmien_wszystkie_lata(osoby, 2);
	for (int i = 0; i < 2; i++)
		printf("imie: %s\t wiek: %d\n", osoby[i].imie, osoby[i].wiek);

	zmien_wszystkie_imiona(osoby, 2);
	for (int i = 0; i < 2; i++)
		printf("imie: %s\t wiek: %d\n", osoby[i].imie, osoby[i].wiek);
}