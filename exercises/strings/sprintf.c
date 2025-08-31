#include <stdio.h>
int main(void) {
    char buffer[100];
    
    sprintf(buffer, "Hello, %s", "uhh");

    printf("%s", buffer);


    return 0;
}