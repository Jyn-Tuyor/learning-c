#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("How much memory would u like to allocate\n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    int val;

    for (int i = 0; i < 5; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &val);

        ptr[i] = val;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", ptr[i]);
    }

    free(ptr);

    return 0;
}