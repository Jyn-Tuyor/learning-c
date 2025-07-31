#include <stdio.h>

int main() {
    int m = 29;
    
    printf("Address of m : %p\n", (void *) &m);
    printf("Value of m : %d\n\n", m);

    int *ab = &m;

    printf("Now ab is assigned with the address of m\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Value of pointer ab : %d\n\n", *ab);


    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;

    printf("Address of m : %p\n", (void *) &m);
    printf("Value of m : %d\n\n", m);


    return 0;
}