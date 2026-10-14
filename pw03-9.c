#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t name[100];

    if (wscanf(L"%99ls", name) == 1) {
        wprintf(L"Агент %ls авторизован в системе\n", name);
    }

    return 0;
}