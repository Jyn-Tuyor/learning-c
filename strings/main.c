#include <stdio.h>
#include <string.h>

int main() {
    // Concatenating string
    char str1[] = "yooo";
    char str2[] = " www";
    
    strcat(str1, str2);
    printf("%s", str1);


    return 0;
}