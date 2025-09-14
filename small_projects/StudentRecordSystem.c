#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[512];
    char course[512];
    char id_number[50];
    int age;
    struct Student *next;
};

void add_student(struct Student **head_node, int *total_students);
void display(struct Student *head_node);
struct Student *search_by_id(struct Student *head_node);

int main(void)
{
    struct Student *head_node = NULL;
    int total_students = 0;

    system("cls");
    while (1)
    {


        // struct Student students[512];
        //  struct Student *head_node = (struct Student *)malloc(sizeof(struct Student));

        printf("\t\t========Student Record System========\n");
        printf("\t\t[1] Add a student\n");
        printf("\t\t[2] Display\n");
        printf("\t\t[3] Search by ID Number\n");


        int input;

        scanf("%d", &input);

        getchar();

        switch (input)
        {
        case 1:
            add_student(&head_node, &total_students);
            break;
        case 2:
            display(head_node);
            break;
        case 3:
            if (head_node == NULL) {
                break;
            }

            struct Student *student = search_by_id(head_node);
            printf("\t\tName: %s\n\t\tID Number: %s\n\t\tCourse: %s\n\t\tAge: %d\n",
                student->name,
                student->id_number,
                student->course,
                student->id_number
            );

            printf("\n\n"); 
            
            break;
        default:
            break;
        }

        printf("\t\tTotal students: %d\n", total_students);
    }
    return 0;
}

void add_student(struct Student **head_node, int *total_students)
{
    char name_buffer[100];
    char course_buffer[100];
    char id_number[100];
    int age;

    printf("\t\tEnter student name: ");
    fgets(name_buffer, sizeof(name_buffer), stdin);
    name_buffer[strcspn(name_buffer, "\n")] = '\0';

    printf("\t\tEnter course: ");
    fgets(course_buffer, sizeof(course_buffer), stdin);
    course_buffer[strcspn(course_buffer, "\n")] = '\0';

    printf("\t\tEnter ID number: ");
    fgets(id_number, sizeof(id_number), stdin);
    id_number[strcspn(id_number, "\n")] = '\0';
    printf("\t\tEnter age: ");
    scanf("\t\t%d", &age);

    char ch;
    while ((ch = getchar()) != '\n');

    struct Student *new = (struct Student *)malloc(sizeof(struct Student));
    strcpy(new->name, name_buffer);
    strcpy(new->course, course_buffer);
    strcpy(new->id_number, id_number);
    new->age = age;
    new->next = NULL;

    if (*head_node == NULL)
    {
        *head_node = new;
    }
    else
    {
        // traverse
        struct Student *temp = *head_node;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;
    }

    // strcpy(students[*total_students].name, name_buffer);
    // strcpy(students[*total_students].course, course_buffer);
    // strcpy(students[*total_students].id_number,  id_number);
    // students[*total_students].age = age;

    (*total_students)++;
}

void display(struct Student *head_node)
{
    system("cls");
    printf("\n\t\t=======Displaying Students========\n");
    struct Student *temp = head_node;

    // traverse...
    while (temp != NULL)
    {

        printf("\t\tName: %s\n", temp->name);
        printf("\t\tCourse: %s\n", temp->course);
        printf("\t\tID Number: %s\n", temp->id_number);
        printf("\t\tAge: %d\n", temp->age);
        printf("\n\n");
        temp = temp->next;

    }

}

struct Student *search_by_id(struct Student *head_node) {
    system("cls");
    char id_number[100];
    printf("\t\tEnter student ID Number: ");
    fgets(id_number, sizeof(id_number), stdin);

    id_number[strcspn(id_number, "\n")] = '\0';

    // traverse...

    struct Student *temp = head_node;



    while (temp != NULL) {
        if (strcmp(temp->id_number, id_number) == 0) {
            printf("\t\tStudent found...\n");
            printf("\n\n");
            return temp;
        }
        printf("\t\tStudent not found...\n");
        temp = temp->next; 
    }

    // printf("\n\n");

}
