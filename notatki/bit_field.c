#include <stdio.h>

struct bit_fields_s {
	// pole bitowe
	// typ [nazwa]: szerokosc
	unsigned int first	: 1;
	unsigned int second : 1;
	unsigned int third  : 1;
	unsigned int     	: 0;	// wyrownanie do nastepnej jednostki typu int (szerokosc 0 nie moze miec nazwy)
	unsigned int fourth	: 2;
	unsigned int		: 4;	// pomijajac nazwe dodajemy okreslona liczbe bitow wypelnienia
	long long fifth     : 64;	// liczba bitow nie moze przekraczas rozmiaru podanego typu
};

struct bit_fields2_s {
	unsigned int a : 30;		// pole nie moze sie znajdowac na granicy dwoch jednostek int
	unsigned int b : 4;
	unsigned int c : 29;
};

struct bit_fields3_s {
	unsigned int a : 1;
	signed int b   : 1;
	int c          : 1;
	_Bool d        : 1;
};

typedef struct bit_fields_s bit_field;
typedef struct bit_fields2_s bit_field2;

int main()
{
	bit_field field = { 0, 0, 0, 3, 31 };

	// bit field overflow
	printf("size: %zd\n", sizeof(bit_field));
	printf("size: %zd\n", sizeof(unsigned int));

	printf("size: %zd\n", sizeof(bit_field2));


	// bit field overflow
	printf("%d %d %d %d %lld\n", field.first, field.second++, field.third, field.fourth, field.fifth);
	printf("%d %d %d %d %lld\n", field.first, field.second++, field.third, field.fourth, field.fifth);
	printf("%d %d %d %d %lld\n", field.first, field.second++, field.third, field.fourth, field.fifth);
	printf("%d %d %d %d %lld\n", field.first, field.second++, field.third, field.fourth, field.fifth);
	printf("%d %d %d %d %lld\n", field.first, field.second++, field.third, field.fourth, field.fifth);

	return 0;
}