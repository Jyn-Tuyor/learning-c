#include <stdio.h>
#include <stdlib.h>

/*

    Insert at the beginning:
    Each time you add a new node, it should become the new head of the list.
    The previous nodes are linked after it.

    Display after each insertion:
    After you insert a node, print all the values in the list from head to tail.

    Start with an empty list.
    Insert value 5 → List: 5
    Insert value 10 → List: 10 -> 5
    Insert value 20 → List: 20 -> 10 -> 5
*/


struct Node {
    int data;
    struct Node *next;
};


struct Node *insert_beggining(struct Node *head, int data) {
    if (head == NULL) {
        printf("HEAD IS NULL");
        exit(1);
    }

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;

    printf("New node: %d\n", temp->data);
    printf("New node points to: %d\n", temp->next->data);
    return temp;

}


int main(void) {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    int count = 5;
    int value;

    head->data = 6;
    head->next = NULL;


    for (int i = 0; i < count; i++) {
        printf("Insert value -> ");
        scanf("%d", &value);

        // function call;
        struct Node *new = insert_beggining(head, value);
        head = new;
    }




    return 0;
}


