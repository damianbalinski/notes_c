#include <stdio.h>

int main()
{
	// FAIL - parametr %n NIE jest obslugiwany
	// funkcja kontrolna
    _set_printf_count_output(0);
    printf("czy_obslugiwany: %d\n", _get_printf_count_output());
    //int i = 0;
    //printf("drukuje%n napis\n", &i);
    //printf("liczba znakow: %d\n", i);
    

	// parametr %n jest obslugiwany
	// funkcja kontrolna
    _set_printf_count_output(1);
    printf("czy_obslugiwany: %d\n", _get_printf_count_output());
    int i = 0;
    printf("drukuje%n napis\n", &i);
    printf("liczba znakow: %d\n", i);

}