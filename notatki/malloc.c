#include <stdlib.h>
#include <stdio.h>

#define MAX 50

typedef struct
{
	char nazwa[MAX];
	int liczba;
} ksiazka;

void main()
{
	ksiazka jeden = {
		"ksiazka_jeden",
		1
	};
	
	ksiazka ksiazki[3] = {
		{
			"tablica_jeden",
			101
		},
		{
			"tablica_dwa",
			102
		},
		{
			"tablica_trzy",
			103
		}
	};

	ksiazka** ksiazki_ptr;
	ksiazki_ptr = (ksiazka**)malloc(2*sizeof(ksiazka*));

	ksiazka temp = {
	"temp1",
	1001
	};

	ksiazka* moje_ksiazki = (ksiazka*)malloc(2 * sizeof(ksiazka));
	*moje_ksiazki = temp;
	*(moje_ksiazki + 1) = temp;

	printf("moje_ksiazki nazwa : %s\n", moje_ksiazki->nazwa);
	printf("moje_ksiazki liczba: %d\n", moje_ksiazki++->liczba);
	printf("moje_ksiazki nazwa : %s\n", moje_ksiazki->nazwa);
	printf("moje_ksiazki liczba: %d\n", moje_ksiazki->liczba);
	
	*ksiazki_ptr = &temp;
	*(ksiazki_ptr + 1) = &ksiazki[2];

	printf("nazwa : %s\n", (*ksiazki_ptr)->nazwa);
	printf("liczba: %d\n", (*ksiazki_ptr)->liczba);
	
	printf("nazwa : %s\n", (*(ksiazki_ptr+1))->nazwa);
	printf("liczba: %d\n", (*(ksiazki_ptr+1))->liczba);


	//ksiazka* ksiazki_ptr;
	//ksiazki_ptr = (ksiazka*)malloc(2*sizeof(ksiazka));

	//*ksiazki_ptr = ksiazki[0];
	//*(ksiazki_ptr + 1) = ksiazki[2];
	//printf("nazwa : %s\n", ksiazki_ptr->nazwa);
	//printf("liczba: %d\n", ksiazki_ptr->liczba);

	//printf("nazwa : %s\n", (ksiazki_ptr+1)->nazwa);
	//printf("liczba: %d\n", (ksiazki_ptr+1)->liczba);
	
	//printf("nazwa : %s\n", ksiazki[0].nazwa);
	//printf("liczba: %d\n", ksiazki[0].liczba);

	//printf("nazwa : %s\n", (ksiazki+1)->nazwa);
	//printf("liczba: %d\n", (ksiazki+1)->liczba);
	
	//printf("nazwa : %s\n", (ksiazki_ptr)->nazwa);
	//printf("liczba: %d\n", (ksiazki_ptr)->liczba);
}