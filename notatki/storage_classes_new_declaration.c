#include <stdio.h>

// AUTO
//int faa1(auto int* a);
//int faa2(int auto* a);
//int faa3(int * auto a);
//int faa4(int a[auto]);

// REGISTER
int fbb1(register int* a);
int fbb2(int register* a);
//int fbb3(int * register a);
//int fbb4(int a[register]);

// STATIC
//int fcc1(static int* a);
//int fcc2(int static* a);
//int fcc3(int * static a);
int fcc4(int a[static 10]);

// EXTERN
int fdd1(extern int* a);
//int fdd2(int extern* a);
//int fdd3(int * extern a);
//int fdd4(int a[extern]);

// CONST
int fee1(const int* a);
int fee2(int const* a);
int fee3(int* const a);
int fee4(int a[const]);

// VOLATILE
int fff1(volatile int* a);
int fff2(int volatile* a);
int fff3(int* volatile a);
int fff3(int a[volatile]);

// RESTRICT
//int fgg1(restrict int* a);
//int fgg2(int restrict* a);
int fgg3(int* restrict a);
int fgg4(int a[restrict]);

// ATOMIC
int fhh1(_Atomic int* a);
int fhh2(int _Atomic* a);
int fhh3(int* _Atomic a);
int fhh4(int a[_Atomic]);

void main()
{
}