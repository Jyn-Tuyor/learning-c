#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_student(struct Student **head_node, int *total_students) {
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
  scanf("%d", &age);

  char ch;
  while ((ch = getchar()) != '\n')
    ;

  struct Student *new = (struct Student *)malloc(sizeof(struct Student));
  strcpy(new->name, name_buffer);
  strcpy(new->course, course_buffer);
  strcpy(new->id_number, id_number);
  new->age = age;
  new->next = NULL;

  if (*head_node == NULL) {
    *head_node = new;
  } else {
    // traverse
    struct Student *temp = *head_node;
    while (temp->next != NULL) {
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

void display(struct Student *head_node) {
  system("cls");
  printf("\n\t\t=======Displaying Students========\n");
  struct Student *temp = head_node;

  // traverse...
  while (temp != NULL) {

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
      return temp;
    }
    temp = temp->next;
  }

  // printf("\n\n");
  return NULL;
}

void update(struct Student *head_node) {
  struct Student *student = search_by_id(head_node);
  int input;

  char name[100];
  char id_number[50];
  char course[100];
  int age;

  if (student != NULL) {
    printf("\t\tWhich info do you want to update?\n");
    printf("\t\t[1] Name\n");
    printf("\t\t[2] ID Number\n");
    printf("\t\t[3] Course\n");
    printf("\t\t[4] Age\n");

    scanf("%d", &input);

    getchar();

    switch (input) {
    case 1:
      printf("\t\tEnter new name: ");
      fgets(name, sizeof(name), stdin);
      name[strcspn(name, "\n")] = '\0';
      strcpy(student->name, name);
      break;
    case 2:
      printf("\t\tEnter new ID number: ");
      fgets(id_number, sizeof(id_number), stdin);
      id_number[strcspn(id_number, "\n")] = '\0';
      strcpy(student->id_number, id_number);
      break;
    case 3:
      printf("\t\tEnter new course: ");
      fgets(course, sizeof(course), stdin);
      course[strcspn(course, "\n")] = '\0';
      strcpy(student->course, course);
      break;
    case 4:
      printf("\t\tEnter new age: ");
      scanf("%d", &age);
      student->age = age;
      getchar();
      break;
    default:
      break;
    }
  }
}

void delete(struct Student **head_node, int *total_students) {
  struct Student *temp = *head_node;
  struct Student *prev = NULL;
  // n -> n -> n
  char id_number[50];
  printf("\t\tEnter ID number to be deleted: ");
  fgets(id_number, sizeof(id_number), stdin);
  id_number[strcspn(id_number, "\n")] = '\0';

  if (strcmp(id_number, temp->id_number) == 0) {
    *head_node = temp->next;
    free(temp);
    return;
  }

  // traverse...
  while (temp != NULL && strcmp(temp->id_number, id_number) != 0) {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL) {
    return;
  }

  prev->next = temp->next;
  free(temp);
  (*total_students)--;
}
