#include <stdio.h>
#include <string.h>

int main(void) {
    char name[76];

    scanf("%75s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", strlen(name) + 5, name);

    return 0;
}