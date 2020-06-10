#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

void main()
{
	int liczba;
	float numer1;
	double numer2;
	char napis1[MAX];
	char* napis2 = napis1;

	int n;
	//n = scanf("%d", &liczba);
	//printf("n: %d\n", n);

	//scanf("%d %s", &liczba, napis1);
	//printf("l: %d\tn: %s\n", liczba, napis1);

	//scanf("%d%f", &liczba, &numer1);
	//printf("l: %d\tn: %f\n", liczba, numer1);

	// have to type 123___123.0
	// or 123___    123.0
	scanf("%d___%f", &liczba, &numer1); 
	printf("%d  %f\n", liczba, numer1);

	printf("liczba: ");
	scanf("%d", &liczba);

	printf("numer1: ");
	scanf("%f", &numer1);

	printf("numer2: ");
	scanf("%lf", &numer2);

	printf("napis1: ");
	scanf("%s", napis1);

	printf("napis2: ");
	scanf("%s", napis2);
	

	printf("liczba: %d\n", liczba);
	printf("numer1: %f\n", numer1);
	printf("numer2: %lf\n", numer2);
	printf("napis1: %s\n", napis1);
	printf("napis2: %s\n", napis2);
}