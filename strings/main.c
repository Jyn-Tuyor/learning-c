#include <stdio.h>
#include <string.h>

int main() {
    int var[5] = {1, 2, 3, 4, 2};
    // strcpy(destination, source) → copy string
    // strcpy(str3, str1); // string copy
    // printf("strcpy: %s\n", str3);

    // strcat(destination, source) → concatenate strings
    // strcat(str2, str1);
    // cat -> concatenate
    // ISUMPAY ANG STRINGS
    // printf("strcat: %s\n", str2);

    // strlen(string) → length of string
    // printf("strlen: %d\n", strlen(str2));

    // strcmp(str1, str2) → compare strings (0 if equal)
    // printf("strcmp (Hello vs World): %d\n", strcmp("Hello", "World"));
    // printf("strcmp (Hello vs Hello): %d\n", strcmp("Hello", "Hello"));

    // strchr(string, char) → find first occurrence of char
    // printf("strchr (str2, 'o'): %s\n", strchr(str2, 'o'));

    // strstr(haystack, needle) → find substring
    // printf("strstr (HelloWorld, World): %s\n", strstr("HelloWorld", "World"));

    return 0;
}
