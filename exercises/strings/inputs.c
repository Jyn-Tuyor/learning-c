#include <stdio.h>

int main() {
    char str[50];
    int length = 0;
    fgets(str, sizeof str, stdin);
    
    printf(
        "Inputted string: %s",
        str
    );


    while (str[length] != '\0') {
        length++;
    }

    printf("Length: %d", length);
    
    return 0;
}