#include <stdio.h>
#include <string.h>
#define MAX 50
#pragma warning(disable : 4996)

union uniaA
{
	int liczba;
	char znak;
};

union uniaB
{
	union uniaA unia;
	union uniaA* unia_ptr;
};

void main()
{
	union uniaA temp;
	temp.liczba = 12;
	
	union uniaB moja_unia;
	moja_unia.unia = temp;

	printf("liczba: %d\n", moja_unia.unia.liczba);

	moja_unia.unia_ptr = &temp;

	printf("liczba: %d\n", moja_unia.unia_ptr->liczba);

	temp.liczba = 20;
	printf("liczba: %d\n", moja_unia.unia_ptr->liczba);

	temp.znak = 'A';
	printf("znak: %c\n", moja_unia.unia_ptr->znak);
	printf("znak: %c\n", (&temp)->znak);
	printf("liczba: %c\n", (&temp)->liczba);

	temp.liczba = 123;
	printf("liczba2: %d\n", temp.liczba);
	printf("liczba2: %d\n", temp.znak);
}