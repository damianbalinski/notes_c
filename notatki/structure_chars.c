#include <stdio.h>
#include <string.h>
#define MAX 50
#pragma warning(disable : 4996)

struct osoba
{
	char imie[MAX];
	char* nazwisko;
};

void main()
{
	struct osoba jan =
	{
		"Jan",
		"Nowak"
	};

	printf("imie:     %s\n", jan.imie);
	printf("nazwisko: %s\n", jan.nazwisko);

	strcpy(jan.imie, "Damian");
	char* nowe_nazwisko = "Kowalski";

	jan.nazwisko = nowe_nazwisko;
	
	printf("imie:     %s\n", jan.imie);
	printf("nazwisko: %s\n", jan.nazwisko);

	jan.nazwisko = "Nowe nazwisko";
	strcpy(jan.imie, "Nowe imie");
	printf("imie:     %s\n", jan.imie);
	printf("nazwisko: %s\n", jan.nazwisko);
}