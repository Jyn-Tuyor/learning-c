#include <stdio.h>
#include <stdbool.h>

int func(int array[], int length)
{
    // {1, 2, 3, 4};
    int flag = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (array[i] > array[i+1]) 
            return 0;
    }

    return 1;
}

int main(void)
{
    int array1[] =  {3, 3, 5, 5, 5, 5};
    int arr_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", func(array1, arr_size));
    return 0;
}