#include <stdio.h>
#include <string.h>
#define Dt "LinuxDistro"

int main(void) {
    const char date[] = "2026";

    printf("DISTRO: %s\n", Dt);
    printf("RDATE: %s\n", date);
    printf("STRLEN: %zu\n", strlen(Dt));
    printf("SIZEOF: %zu\n", sizeof(Dt));

    return 0;
}