#include <stdio.h>

// FAIL - register moze byc uzyty tylko do zmiennych lokalnych
// register int x = 5;

void main()
{
	// register - propozycja do kompilatora, aby umiescil zmi-
	// nna w rejestrze zamiast w pamieci operacyjnej, finalnie
	// decyduje kompilator, liczba rejestrow jest ograniczona,
	// dlatego (mimo tego ze nie ma zadnych ograniczen) nie
	// uzywajmy ich w zbyt duzej ilosci
	printf("Hello world\n");
	static int a = 5;
	register int b = 5;
	int* aa = &a;
	register int* bb = &a;
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	// FAIL - register jest klasa magazynow, nie mozna jej la-
	// czyc ze static
	// register static int a;
	
	// FAIL - zmienna register nie jest przechowywana w pamieci
	// tylko w rejestrze procesora, dlatego nie mozna uzyc &a
	// register int a;
	// int* aa = &a
}