#include <stdio.h>
#include <ctype.h>

void main()
{
	// ISALNUM
	// alfanumeryczny (cyfra/litera)
	//printf("%d\n", isalnum('0'));
	//printf("%d\n", isalnum('a'));
	//printf("%d\n", isalnum('A'));
	//printf("%d\n", isalnum(','));

	// ISALPHA
	// alfabetyczny (litera)
	//printf("%d\n", isalpha('0'));
	//printf("%d\n", isalpha('a'));
	//printf("%d\n", isalpha('A'));
	//printf("%d\n", isalpha(','));

	// ISCNTRL
	// znak kontrolny (ASCII 0-31, 127)
	//printf("%d\n", iscntrl('0'));
	//printf("%d\n", iscntrl('\0'));
	//printf("%d\n", iscntrl('\01'));
	//printf("%d\n", iscntrl('\02'));

	// ISPRINT
	// znak drukowalny (nie jest znakiem kontrolnym)
	//printf("%d\n", isprint('0'));
	//printf("%d\n", isprint('\t'));
	//printf("%d\n", isprint(' '));
	//printf("%d\n", isprint('\01'));

	// ISGRAPH
	// znak graficzny (znak drukowalny, nie znak bialy)
	//printf("%d\n", isgraph('0'));
	//printf("%d\n", isgraph('\\'));
	//printf("%d\n", isgraph('\01'));
	//printf("%d\n", isgraph('\02'));

	// ISPUNCT
	// znak przestankowy (znak graficzny, nie alfanumeryczny)
	//printf("%d\n", ispunct('-'));
	//printf("%d\n", ispunct('.'));
	//printf("%d\n", ispunct(','));
	//printf("%d\n", ispunct('a'));

	// ISDIGIT
	// cyfra dziesietna
	//printf("%d\n", isdigit('0'));
	//printf("%d\n", isdigit('1'));
	//printf("%d\n", isdigit('z'));
	//printf("%d\n", isdigit('9'));

	// ISXDIGIT
	// cyfra szesnastkowa
	//printf("%d\n", isxdigit('A'));
	//printf("%d\n", isxdigit('a'));
	//printf("%d\n", isxdigit('0'));
	//printf("%d\n", isxdigit('9'));

	// ISLOWER
	// mala litera
	//printf("%d\n", islower('0'));
	//printf("%d\n", islower('a'));
	//printf("%d\n", islower('A'));
	//printf("%d\n", islower('b'));

	// ISUPPER
	// wielka litera
	//printf("%d\n", isupper('A'));
	//printf("%d\n", isupper('B'));
	//printf("%d\n", isupper('a'));
	//printf("%d\n", isupper('9'));

	// ISSPACE
	// znak bialy (spacja/tabulator poziomy/tabulator pionowy/nowa linia/
	// wysuw strony/powrot karetki)
	//printf("%d\n", isspace('-'));
	//printf("%d\n", isspace(' '));
	//printf("%d\n", isspace('\t'));
	//printf("%d\n", isspace('a'));

	// ISBLANK
	// znak pusty (spacja, tabulator)
	printf("%d\n", isblank(' '));
	printf("%d\n", isblank('\t'));
	printf("%d\n", isblank('\n'));
	printf("%d\n", isblank('\v'));
}