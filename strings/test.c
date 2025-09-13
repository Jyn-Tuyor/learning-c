#include <stdio.h>

int main() {
    // 1. Defining strings
    // char str[] = "hello";
    // printf("String 1: %s\n", str);

    // strings -> array of characters (char data type)
    // int numbers[] = {1, 2, 3};

    // char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // printf("String 2: %s", str2);

    // For getting user's input
    char name[50];

    fgets(name, sizeof(name), stdin);

    printf("Your name is: %s", name);


    return 0;
}