#include <stdio.h>

struct Student {
    char name[100];
    int age;
    char id_number[50];
    char course[10];
};

int main() {
    struct Student students[] = {
        {
            .name="Jyn Jo",
            .age=12,
            .id_number="2025300703",
            .course = "BSIT"
        },

        {
            .name="Peng",
            .age=24,
            .id_number="2025300705",
            .course = "BSIT"
        },
    };

    int length = sizeof(students)/sizeof(students[0]);

    // printf("%d", length);

    for (int i = 0; i < length; i++) {
        printf("Name: %s\n", students[i].name);
        printf("ID Number: %s\n", students[i].id_number);
        printf("Course: %s\n", students[i].course);

        printf("\n");
    }

    
    return 0;
}