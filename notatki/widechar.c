#include <stddef.h>
#include <stdio.h>
#include <uchar.h>

int main(void)
{
    int a1 = 'A';
    char16_t a2 = u'A';
    char32_t a3 = U'A';
    wchar_t a4 = L'A';

    char* b1 = "abc";
    char16_t* b2 = u"abc";
    char32_t* b3 = U"abc";
    wchar_t* b4 = L"abc";
    wint_t;

    printf("%c\n", a1);
    printf("%lc\n", a2);
    printf("%lc\n", a3);
    printf("%lc\n", a4);
    printf("%C\n", a4);
    putchar('\n');

    printf("%s\n", b1);
    printf("%ls\n", b2);
    printf("%ls\n", b3);
    printf("%ls\n", b4);
    printf("%S\n", b4);

}