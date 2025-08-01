#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("How much memory would u like to allocate\n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    int val;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &val);
        sum += val;
        ptr[i] = val;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", ptr[i]);
    }

        printf("\nSum: %d, ", sum);

    free(ptr);

    return 0;
}