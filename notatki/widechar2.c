#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t* test = L"the 来. Testing unicode -- English -- Ελληνικά -- Español.";

    wprintf(L"%ls\n", test);
}