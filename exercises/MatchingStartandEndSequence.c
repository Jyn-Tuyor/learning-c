/*
    a C program to check a given array of integers.
    The program will return true if the specified number of the
    same elements appears at the start and end of the given array.
*/

#include <stdio.h>
#include <stdbool.h>

bool func(int array[], int n, int size)
{

    if (array[size - 1] == n && array[0] == n)
    {
        return true;
    }

    return false;
}

int main(void)
{

    int array[] = {3, 7, 5, 5, 3, 3};
    int arr_size = sizeof(array) / sizeof(array[0]);

    printf("%d", func(array, 3, arr_size));

    return 0;
}