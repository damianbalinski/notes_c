#include <string.h>
#include <stdio.h>

#define MAX 100
#pragma warning(disable : 4996)

union magazyn
{
	int liczba;
	char napis[MAX];
};

void main()
{
	union magazyn magazynA;
	magazynA.liczba = 5;                      // przypisanie wartosci konkretnego argumentu

	union magazyn magazynB = magazynA;        // przypisanie wartosci z innej uni
	union magazyn magazynC = { 123 };   // przypisanie wartosci pierwszego argumentu

	union magazyn* magazynD = &magazynA;
	union magazyn* magazynE;
	//magazynE->liczba = 20;

	printf("wartosc: %d\n", magazynA.liczba);
	printf("wartosc: %d\n", magazynA.napis);
	printf("wartosc: %d\n", magazynB.liczba);
	printf("wartosc: %d\n", magazynC.liczba);
	printf("wartosc: %d\n", magazynD->liczba);
	printf("wartosc: %d\n", magazynA.napis);
	//printf("wartosc: %d\n", magazynE->liczba);
}