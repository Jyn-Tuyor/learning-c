#include <stdio.h>
#include <string.h>

int main() {
    // 1. strcpy
    // 2. strcat
    // 3. strlen
    // 4. strcmp
    // 5. strchr
    // 6. strstr
    // 7. strlwr
    // 8. strupr

     

    /*
    strcpy - copies a string into another
    variable
    */

    char str_3[50];
    // strcpy 1st parameter: 
    //  -where to store copied value
    // strcpy 2nd paramter:
    //  - which string to copy

    // strcpy(str_3, str_1);
    // printf("%s", str_3);


    // strcat - concatenate
    // ginusumpay ang string

    char str_1[] = "hello";
    char str_2[] = "world";    
   
    // strcat(str_1, str_2);



    printf("%d", strlen(str_1));


    return 0;
}