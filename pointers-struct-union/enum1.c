#include <stdio.h>

/* ENUMS */

enum direction {
    NORTH, EAST, WEST, SOUTH
};

int main(void) {

    enum direction dir = WEST;

    printf("%d", dir == WEST);

    return 0;
}