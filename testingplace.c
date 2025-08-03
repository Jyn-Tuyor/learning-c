#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3};
    int x = 4;
    int y = 2;
    int z = x+y;

    arr[3] = 10;


    printf("Address of second last element: %p\n", &arr[2]);
    printf("Address of last element: %p\n", &arr[3]);
    printf("Adress of x: %p", &x);





    return 0;
}