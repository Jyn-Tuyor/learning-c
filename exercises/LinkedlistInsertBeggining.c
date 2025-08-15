#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
};

struct node *insert_beggining(struct node *head, int data) {
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    
    new->next = head;
   
    return new;
}
void display(struct node *head)
{
    struct node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 23;
    head->next = NULL; 
    head = insert_beggining(head, 10);
    
    display(head);
    return 0;
}