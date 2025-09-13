#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[512];
    char course[512];
    char id_number[50];
    int age;
};

void add_student(struct Student students[], int *total_students); 
void display(struct Student students[]);

int main(void) {
    system("cls");

    struct Student students[512];
    int total_students = 0;
    printf("\t\t========Student Record System========\n");
    printf("\t\t[1] Add a student\n");
    printf("\t\t[2] Display\n");

    int input;

    scanf("%d", &input);

    getchar();

    switch (input)
    {
    case 1:
        add_student(students, &total_students);
        break;
    
    default:
        break;
    }

    printf("Total students: %d", total_students);

    return 0;
}

void add_student(struct Student students[], int *total_students) {
    char name_buffer[100];
    char course_buffer[100];
    char id_number[100];
    int age;

    printf("Enter student name: ");
    fgets(name_buffer, sizeof(name_buffer), stdin);
    name_buffer[strcspn(name_buffer, "\n")] = '\0';

    printf("Enter course: ");
    fgets(course_buffer, sizeof(course_buffer), stdin);
    course_buffer[strcspn(course_buffer, "\n")] = '\0';

    printf("Enter ID number: "); 
    fgets(id_number, sizeof(id_number), stdin);
    id_number[strcspn(id_number, "\n")] = '\0';
    printf("Enter age: "); 
    scanf("%d", &age);

    char ch;
    while ((ch = getchar()) != '\n');
    
    strcpy(students[*total_students].name, name_buffer);
    strcpy(students[*total_students].course, course_buffer);
    strcpy(students[*total_students].id_number,  id_number); 
    students[*total_students].age = age;

    (*total_students)++;
}


void display(struct Student students[]) {
    printf("Displaying...");

    // TODO
}