#include <stdio.h>

enum kolory
{
	CZERWONY,
	NIEBIESKI,
	ZIELONY,
};
void main()
{
	enum kolory kolor;
	kolor = CZERWONY;


	switch(kolor)
	{
	case CZERWONY:
		printf("kolor jest CZERWONY\n");
		printf("kolor: %d\n", kolor);
		break;
	case NIEBIESKI:
		printf("kolor jest NIEBKIESKI\n");
		printf("kolor: %d\n", kolor);
		break;
	case ZIELONY:
		printf("kolor jest ZIELONY\n");
		printf("kolor: %d\n", kolor);
		break;
	default:
		printf("kolor jest INNY\n");
		printf("kolor: %d\n", kolor);
	}
}