#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insert_end(struct Node *head, int data)
{
    struct Node *tmp = head;
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = data;
    new->next = NULL;

    if (head == NULL) {
        return new;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new;

    return tmp;
}

void display_list(struct Node *head)
{
    struct Node *curr = head;

    while (curr != NULL) {
        printf("%d", curr->data);

        if (curr->next != NULL) printf(" -> ");

        curr = curr->next;
    }
    printf("\n");
}

int main(void)
{
    struct Node *head = NULL;
    int value;

    for (int i = 0; i < 5; i++)
    {
        printf("insert -> ");
        scanf("%d", &value);

        head = insert_end(head, value);
        display_list(head);
    }

    return 0;
}