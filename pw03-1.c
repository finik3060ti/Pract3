#include <stdio.h>
#include <string.h>

int main(void) { 
    char str[20] = "SibSUTIS";

    printf("SIZEOF: %zu\n", sizeof(str));
    printf("STRLEN: %zu\n", strlen(str));
    printf("FREE_BYTES: %zu\n", sizeof(str) - strlen(str) - 1);

    char str2[20] = "СибГУТИ";

    printf("\nSIZEOF: %zu\n", sizeof(str2));
    printf("STRLEN: %zu\n", strlen(str2));
    printf("FREE_BYTES: %zu\n", sizeof(str2) - strlen(str2) - 1);

    return 0;
}