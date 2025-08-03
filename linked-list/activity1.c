#include <stdio.h>
#include <stdlib.h>
/*
    Array to linked list or something like it 👍
*/

struct Node
{
    int data;
    struct Node *next;
};

struct Node *create_node(int data)
{
    struct Node *new_data = (struct Node *)malloc(sizeof(struct Node));

    if (new_data == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    new_data->data = data;
    new_data->next = NULL;
}

void display_list(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is emptyyyy");
        return;
    }

    struct Node *curr = head;

    while (curr->next != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    struct Node head;
    head.data = array[0];
    head.next = NULL;

    for (int i = 1; i < n+1; i++)
    {
        struct Node *temp = create_node(array[i]);

        if (head.next == NULL)
        {
            head.next = temp;
        }
        else
        {

            struct Node *curr = &head;

            while (curr->next != NULL)
            {
                curr = curr->next;
            }

            curr->next = temp;
        }
    }


    display_list(&head);
    return 0;
}