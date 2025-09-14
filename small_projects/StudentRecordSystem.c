#include "student.h"
#include <stdio.h>
#include <stdlib.h>
// Remove warnings in astronvim
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

int main(void) {
  struct Student *head_node = NULL;
  int total_students = 0;

  system("cls");
  while (1) {

    // struct Student students[512];
    //  struct Student *head_node = (struct Student *)malloc(sizeof(struct
    //  Student));

    printf("\t\t========Student Record System========\n");
    printf("\t\t[1] Add a student\n");
    printf("\t\t[2] Display\n");
    printf("\t\t[3] Search\n");
    printf("\t\t[4] Update\n");
    int input;

    scanf("%d", &input);

    getchar();

    switch (input) {
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

      if (student != NULL) {

        printf("\t\tName: %s\n\t\tID Number: %s\n\t\tCourse: %s\n\t\tAge: %d\n",
               student->name, student->id_number, student->course,
               student->age);

        printf("\n\n");
      }
      break;
    case 4:
      update(head_node);
      break;

    case 5:
      delete(&head_node, &total_students);
      break;
    default:
      break;
    }

    printf("\t\tTotal students: %d\n", total_students);
  }
  return 0;
}
