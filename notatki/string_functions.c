#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void main()
{
	/*
	 * alokowane miejsce to 8+1, dodatkowy bajt na znak pusty
	 */
	char s[9] = "abcdefgh";								

	/* ###
	 * strlen - zwraca dlugosc lancucha znakowego, nie wlicza znaku
	 * pustego na koncu
	 */
	printf("strlen: %s\n", s);

	/* ###
	 * strspn - zwraca dlugosc poczatkowego lancucha string, ktory
	 * sklada sie wylacznie ze znakow z lanucha control
	 *
	 * strcspn - zwraca dlugosc poczatkowego lancucha string, ktory
	 * nie zawiera znakow z lanucha control
	 */
	char* ii = "aabbccdddeeff";
	char* jj = "cab";
	char* kk = "dec";
	printf("strspn1: %d\n", strspn(ii, jj));
	printf("strspn2: %d\n", strcspn(ii, kk));

	/* ##
	 * strcat - dodaje lanuchc y na koniec lancucha x, nie alokuje
	 * dodatkowej pamieci, zwraca wskaznik na lancuch dest,
	 * x musi byc zainicjalizowany, y pozostaje bez zmian
	 */
	char x[7] = "abc";
	char y[6] = "zzz";
	char* z;
	z = strcat(x, y);
	strcat(y, "aa");
	printf("strcat1: %s\n", x);
	printf("strcat2: %s\n", y);
	printf("strcat3: %s\n", z);

	/* ##
	 * strncat - dodaje maksymalnie n znakow z b do a
	 */
	char a[10] = "abc";
	char b[] = "xxx";
	printf("a = %s\n", a);
	printf("b = %s\n", b);
	strncat(a, a, 2);
	printf("a = %s\n", a);
	printf("b = %s\n", b);

	/* ##
	 * strcmp - porownuje dwa lancuchy znakowe, bezposrednie porownywanie
	 * nie dziala, bo lanuch znakowy jest wskaznikiem na pierwszy element
	 * w lancuchu, zwraca 0 jesli lanuchy sa takie same, liczbe ujemna
	 * jesli a < b oraz liczbe dodatnia jesli a > b
	 */
	char c[] = "abc";
	char d[] = "abc";
	printf("comp1: %d\n", c == d);				
	//printf("comp 2 %d\n", strcat("abc", "abc"));	
	printf("comp3: %d\n", strcmp(c,d));

	/* ##
	 * strncmp - porownuje maksymalnie n znakow 
	 */
	char e[] = "abcdef";
	char f[] = "abc";
	printf("comp1: %d\n", strncmp(e, f, 4));
	printf("comp2: %d\n", strncmp(e, f, 3));

	/* ##
	 * memcmp - porownuje maksymalnie n najtów 
	 */
	char cc[] = "qwerty";
	char dd[] = "qwe";
	printf("memcmp1: %d\n", memcmp(cc, dd, 3));
	printf("memcmp2: %d\n", memcmp(cc, dd, 4));
	
	/* ##
	 * strcpy - kopiuje lancuch b w miejsce lancucha a, nie alokuje
	 * miejsca na wklejany lancuch, zwraca wskaznik na lancuch dest,
	 * pierwszys argument usi byc zainicjalizowany,
	 */
	char g[7] = "abc";
	char h[] = "x";
	char* k;
	k = strcpy(g, h);
	strcpy(g, "ppp");
	printf("strcpy1: %s\n", g);
	printf("strcpy2: %s\n", h);
	printf("strcpy3: %s\n", k);
	
	/* ##
	 * strncpy - kopiuje maksymalnie n znakow, ze zrodla b do a
	 */
	char i[] = "xxxx";
	char j[] = "zzz";
	strncpy(i, j, 2);
	printf("strncpy1: %s\n", i);
	printf("strncpy2: %s\n", j);

	
	/* ##
	 * memcpy - kopiuje maksymalnie n bajtow ze src do dest,
	 * uwaga na kopiowanie liczb - little indian
	 */
	int eee = 100;
	int fff = 7;
	int *ee = &eee;
	int *ff = &fff;
	printf("ee: %d\n", *ee);
	printf("ff: %d\n", *ff);
	memcpy(ee, ff, 1);
	printf("ee: %d\n", *ee);
	printf("ff: %d\n", *ff);

	char nn[] = "abcdef";
	printf("START %s\n", nn);
	nn[3] = '\0';
	printf("STOP %s\n", nn);
	char mm[10];
	memcpy(mm, nn, 6);
	for (int i = 0; i < 6; i++)
		printf("%c ", mm[i]);

	/* ##
	 * memmove - kopiuje maksymalnie n bajtow z src do dest,
	 * kozysta z miejsca tymczasowego, dlatego mozliwe jest
	 * kopiowanie z tego samego obszaru co wklejanie
	 */

	/* ##
	 * memset - umieszcza wartosc dest w pierwszych ne bajtach
	 * pamieci skazywanych przez src, uwaga na little indian
	 */
	int gg = 7;
	int hh = 123;
	int* hhh = &hh;
	printf("memset1: %d\n", *hhh);
	memset(hhh, gg, 1);
	printf("memset2: %d\n", *hhh);

	
	/* ##
	 * strchr - zwraca wskaznik na pierwsze wystapienie znaku c
	 * w podanym lancuchu lub NULL jesli nie znaleziono znaku
	 * strrchr - zwraca wskaznik do ostatniego wystapienia znaku c
	 * w podanym lanuchu
	 */
	char* l;
	char m[] = "aabbccdd";
	l = strchr(m, 'c');
	printf("strchr1: %c\n", *l);
	printf("strchr2: %p\n", l);
	printf("strchr3: %p\n", m+4);
	l = strrchr(m, 'a');
	printf("strrchr1: %c\n", *l);
	printf("strrchr2: %p\n", l);
	printf("strrchr3: %p\n", m+1);
	l = strrchr(m, 'z');
	printf("strrchr2: %p\n", l);

	/* ##
	 * memchr - zwraca wskaznik do pierwszego wystapienia znaku c
	 * w pierwszych n bajtach podanego objektu lub NULL, jesli nie
	 * znaleziono znaku
	 */
	char* aa = "aabbccddee";
	char* bb;
	bb = memchr(aa, 'c',10);
	
	printf("memchr: %s\n", bb);
	printf("memchr2: %p\n", bb);
	printf("memchr3: %p\n", aa+4);

	
	/* ##
	 * strpbrk = zwraca wskaznik do pierwszego wystapienia kotrego
	 * kolwiek ze znakow podanych w src lub NULL ,jesli nie znalezi
	 * ono znaku
	 */
	char o[] = "abcdefg";
	char p[] = "def";
	char* pp;
	pp = strpbrk(o, p);
	printf("strpbrk1: %c\n", *pp);
	printf("strpbrk2: %p\n", pp);
	printf("strpbrk3: %p\n", o + 3);

	/* ##
	 * strstr - zwraca wskaznik do pierwszego wystapienia lanucha
	 * substr w lanuchu str
	 */
	char q[] = "qwertyuiop";
	char r[] = "tyu";
	char* rr;
	rr = strstr(q, r);
	printf("strstr1: %s\n", rr);
	printf("strstr2: %p\n", rr);
	printf("strstr3: %p\n", q+4);
}