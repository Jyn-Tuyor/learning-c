#ifndef STUDENT_H
#define STUDENT_H

struct Student {
  char name[512];
  char course[512];
  char id_number[50];
  int age;
  struct Student *next;
};

void add_student(struct Student **head_node, int *total_students);
void display(struct Student *head_node);
struct Student *search_by_id(struct Student *head_node);
void update(struct Student *head_node);
void delete(struct Student **head_node, int *total_students);

#endif
