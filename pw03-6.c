#include <stdio.h>

int main(void) {
    char str[120];
    int width;

    scanf("%119s %d", str, &width);
    printf("%*s\n", width, str);
    printf("%-*s\n", width + 5, str);

    return 0;
}