#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

struct osoba
{
	int wiek;
	float liczba;
	char imie[MAX];
};

void drukuj(struct osoba o)
{
	printf("wiek:   %d\n", o.wiek);
	printf("liczba: %.2f\n", o.liczba);
	printf("imie:   %s\n\n", o.imie);
}

void drukuj_ptr(struct osoba* o)
{
	printf("wiek:   %d\n", o->wiek);
	printf("liczba: %.2f\n", o->liczba);
	printf("imie:   %s\n\n", o->imie);
}

struct osoba zmien_liczbe(struct osoba o, int nowa_liczba)
{
	o.liczba = nowa_liczba;
	return o;
}

void zmien_liczbe_ptr(struct osoba *o, int nowa_liczba)
{
	o->liczba = nowa_liczba;
}

void zmien_imie_ptr(struct osoba *o, char* nowe_imie)
{
	strcpy(o->imie, nowe_imie);
}

struct osoba zmien_imie(struct osoba o, char* nowe_imie)
{
	strcpy(o.imie, nowe_imie);
	return o;
}

void main()
{
	struct osoba jan =
	{
		12,
		100.19,
		"Jan"
	};
	struct osoba* jan2 = &jan;

	drukuj(jan);
	drukuj_ptr(jan2);
	
	jan = zmien_liczbe(jan, -10);
	drukuj(jan);
	zmien_liczbe_ptr(jan2, 1234);
	drukuj_ptr(jan2);
	drukuj(jan);

	jan = zmien_imie(jan, "Kazimierz");
	drukuj(jan);
	zmien_imie_ptr(jan2, "Witold");
	drukuj(jan);
	drukuj_ptr(jan2);

	

}