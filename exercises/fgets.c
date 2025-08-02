#include <stdio.h>

int main() {
    FILE *fptr = fopen("temp.txt", "r");
    char buff[64]; // Where to store the string / storage space for actual string data
    // size of buffer = 64
    int n = 10; // maximun number of characters to be stored in the buffer including the null operator \0

    

    if (fgets(buff, sizeof(buff), fptr) == NULL) {
        printf("File is empty");
        return 1;
    }


    printf("File Contents: %s\n", buff);
    printf("Size of buffer: %d", sizeof(buff));   
    
    
    fclose(fptr);
    return 0;
}