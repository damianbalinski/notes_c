#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
 int: "int",\
 float : "float",\
 double: "double",\
 default: "other"\
 )

void main()
{
    int a = 5;
    printf("%s\n", MYTYPE(a));
}
