#include <stdio.h>
#include <stdbool.h>

bool func(int array[], int length)
{
    /*
        if sunod-sunod ang 5's then return true
        [5, 5, 5, 5] or [1, 2, 3, 5, 5]
    */

    for (int i = 0; i <  length - 1; i++)
    {
        if (array[i] == 5 && array[i+1] == 5)
        {
            return true;
        }
    }

    return false;
}

int main(void)
{
    int array1[] = {3, 5, 1, 4, 1, 2, 7};
    int arr_size = sizeof(array1) / sizeof(array1[0]);

    printf("%d", func(array1, arr_size));

    return 0;
}