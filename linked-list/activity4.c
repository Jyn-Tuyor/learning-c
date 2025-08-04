#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *create_node(int data)
{
    struct Node *new =
        (struct Node *)malloc(sizeof(struct Node));

    if (new == NULL)
    {
        // return NULL;
        printf("Memory allocation failed\n");
        exit(1);
    }

    new->data = data;
    new->next = NULL;

    return new;
}

void insert_at_pos(struct Node *head, int pos, int data)
{
    struct Node *newNode = create_node(data);

    int newPos = pos - 1;

    struct Node *temp = head;

    while (newPos != 1)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Position is invalid\n");
            return;
        }
        newPos--;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
int main(void)
{

    struct Node *head = create_node(3);
    head->next = create_node(5);
    head->next->next = create_node(8);
    head->next->next->next = create_node(10);

    int data = 12, pos = 10;
    insert_at_pos(head, pos, data);
    printList(head);

    return 0;
}