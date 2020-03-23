#include <stdio.h>

int main(void)
{
    float f;
    int* ptr_int;

    f = 1.0f;
    ptr_int = &f;

    printf("%x\n", *ptr_int);

    return 0;
}