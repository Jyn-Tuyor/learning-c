#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *new_array(int array[], int length, int *newLength) {
    int i = 0;
    int *new = malloc(i * sizeof(int));

    for (i = 0; i < length; i++) {
        if (array[i] == 5) {
            break;
        }
        new[i] = array[i];
    }

    *newLength = i;

    return new;
}

int main(void) {
    int array[7] = {1, 2, 3, 4, 5, 7, 3}; 
    int length = sizeof(array)/sizeof(array[0]);
    int newLength = 0;
    int *result = new_array(array, length, &newLength);

    printf("Result:\n");
    for (int i = 0; i < newLength; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
