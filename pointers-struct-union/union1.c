/*
You would use a union when you need to handle multiple types, but never simultaneously.
If you need to store all values at once, use a struct.
*/

#include <stdio.h>
#include <stdlib.h>

// One value at a time
union Person {
    char *name;
    int age;
};

int main(void) {
    union Person person1;

    /*
        Members of the union both shares a place in the memory
    */

    person1.name = "Maki";
    printf("Name: %s\n", person1.name);
  
    // person1.name is overwritten here
    person1.age = 27;
    printf("Name: %d", person1.name); // so this would print out 27 even though it is .name

    //union shares memory for all its members
    // ION GET IT

    return 0;
}