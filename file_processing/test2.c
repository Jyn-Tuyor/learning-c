#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;

    fptr = fopen("io.txt", "w");
    while (1)
    {
        int n;

        printf("Enter # (-1 quits): ");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        fprintf(fptr, "%d\n", n);
    }
    fclose(fptr);
    FILE *finput;
    finput = fopen("io.txt", "r");
    int fdata = 0;

    int line = 1;
    printf("\n");
    while ((fscanf(finput, "%d", &fdata) != EOF))
    {
        printf("file line: %d, data: %d\n", line, fdata);
        line++;
    }

    fclose(finput);
    return 0;
}