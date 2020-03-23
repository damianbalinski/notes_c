#include <stdio.h>

#define MIN = 0
#define MAX = 1

#define SETMAX() max = 111
#define SETMIN() min = 333
#define SET_BOTH() \
	SETMIN(); \
	SETMAX();

#define NAZWA(x) #x
#define WARTOSC(x)  NAZWA(x)

#define CONCAT(X,Y) X Y
#define CONCAT2(X,Y) X ## Y

void main()
{
	int max = 0;
	int min = 0;
	int val = -100;
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	//SETMAX();
	//SETMIN();
	val = SET_BOTH();
	printf("val: %d\n", val);
	printf("max: %d\n", max);
	printf("min: %d\n", min);

	char jakas_zmienna[] = "wartosc_zmiennej";
	printf("nazwa zmiennej  : %s\n", NAZWA(jakas_zmienna));
	printf("wartosc zmiennej: %s\n", WARTOSC(jakas_zmienna));

	printf("concat : %s\n", CONCAT("jeden", "dwa"));
	printf("concat2: %s\n", CONCAT2("jeden", "dwa"));

	int x = 10;
	printf("NAZWA(x) = %s\n", NAZWA(x));
	printf("NAZWA(x+1) = %s\n", NAZWA(x+1));
	
}