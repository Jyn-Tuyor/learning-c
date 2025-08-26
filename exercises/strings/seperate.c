#include <stdio.h>

int main() {

    char str[] = "Hello, world";
    int l = 0;
    while (str[l] != '\0') {
        printf("%c, ", str[l]);
        l++;
    }

    return 0;
}