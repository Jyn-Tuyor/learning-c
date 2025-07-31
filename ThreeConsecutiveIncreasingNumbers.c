/*
    a C program to check a given array of integers and
    return true if the array contains three increasing adjacent numbers.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool func(int array[], int length)
{

    int diff = 0;

    for (int i = 0; i < length - 3; i++)
    {
        diff = abs(array[i] - array[i + 1]);
        if (diff == 1)
        {
            diff = abs(array[i + 1] - array[i + 2]);

            if (diff == 1)
            {
                return true;
            }
        }
    }

    return false;
}

int main(void)
{
    int array1[] =  { 3, 7, 5, 5, 6, 7, 5};
    int arr_size = sizeof(array1) / sizeof(array1[0]);

    printf("Result: %d", func(array1, arr_size));

    return 0;
}