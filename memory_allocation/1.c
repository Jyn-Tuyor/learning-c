#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptrM = (int *) malloc(5 * sizeof(int));
    int val;

    if (ptrM == NULL) {
        printf("Memory not allocated");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Element - %d : ", i);
        scanf("%d", &val);
        
        ptrM[i] = val;
    }


    for (int i = 0; i < 5; i++) {
        printf("%d, ", ptrM[i]);
    }

    free(ptrM);
    return 0;
}