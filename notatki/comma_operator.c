#include <stdio.h>

int number(int a) { printf("%d\n", a); }

void main()
{
	/*
	 * Wartosc wyrazenia przecinkowego to wartosc skrajnie prawego
	 * skladnika.
	 */
	int a = (1, 2, 3, 4);
	printf("a = %d\n", a);

	/* 
	 * Wartosc zwracana przez printf to liczba poprawnie wydrukowanych 
	 * znakow.
	 */
	int b = (printf("1\n"), printf("22\n"), printf("333\n"), printf("4444\n"));
	printf("b = %d\n", b);

	/*
	 * Instrukcje oddzielone przecinkiem sa wykonywane od lewej do prawej,
	 * przecinek jest punktem sekwencyjnym, wyrazenie po prawej stronie jest
	 * ewaluowana dopiero po pelnej ewaluacji wyrazenia po lewej stronie.
	 */
	(printf("A\n"), printf("B\n"), printf("C\n"), printf("D\n"));


	/*
	 * Wyrazenie jest ewaluowane do (c = 10), 20
	 */
	int c;
	c = 10, 20;
	printf("c = %d\n", c);

	/*
	 * Podczas inicjalizacji przecinek nie jest operatorem tylko separatorem,
	 * (10, 20) jest wyrazeniem, ktore ewaluuje do 20.
	 */
	int d = (10, 20);
	
	/*
	 * Wyrazenie jest roznowazne (k=n++), n++,n++
	 */
	int n = 0, k = 0;
	k = n++, n++, n++, n++;
	printf("k = %d\n", k);

	/*
	 * Poniewaz przecinek jest punktem sekwencyjnym, kolejne inkrementacje sa
	 * wykonywane sekwencyjnie, zwracana jest wartosc ostatniego wyrazenie
	 * bezposrednio przed inkrementacja.
	 */
	n = 0; k = 0;
	k = (n++, n++, n++, n++);
	printf("k = %d\n", k);

	for (int i = 0, j = 10; i <= 5, j>=0; i++, j--)
		printf("(%d,%d)\n", i, j);

	// int (*num)(int a) { printf("%d\n", a); }(20);

	//void(^ count_loop)() = ^ {
	//  for (int i = 0; i < 100; i++)
	//	printf("%d\n", i);
	//  printf("ah ah ah\n");
	//};
}