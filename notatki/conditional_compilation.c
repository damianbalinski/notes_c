#include <stdio.h>

#define MAX 50
#ifdef MAX		// wykonuje kod, jesli nastepujacy identyfikator zostal zdefiniowany
				// wykonuje wszystkie dyrektywy az do napotkania else lub endif,
				// przydatne do debugowania lub tworzenia roznych implementacji
	#define MIN 40
#else
	#define MIN 50
#endif          // preprocesor nie rozpoznaje konca klauzuli, endif musi byc obecne 

#if defined OPP		// wykonuje kod, jesli nastepujacy identyfikator nie zostal zdefiniowany
				// uzywana do definiowana stalej, ktora nie zostala jeszcze zdefiniowana
	#define OOP 123
#endif

#define OPP 1233

void main()
{
	printf("OPP: %d\n", OPP);

	#ifdef MAN
		printf("MAN instnieje\n");
	#else
		printf("Nie istnieje\n");
	#endif
}
