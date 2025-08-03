#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    if (new == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }


    new->data = data;
    new->next = NULL;

    return new;
}

void displayList(struct Node *head) {
    if (head == NULL) {
        printf("LinkedList is empty.");
        exit(1);
    }

    struct Node *curr = head;
    int counter = 0;

    while (curr != NULL) {
        printf("Data - %d: %d\n", counter, curr->data);

        curr = curr->next; //  this will be a null in the end
        counter++;
    }


}


int main() {
    struct Node *head = NULL;
    head = createNode(5);

    int value;
    char ch;


    while(1) {
        printf("q to quit, w to add new data: ");
        // fgets(buff, sizeof(buff), stdin);

        ch = getchar();

        // Consume newline chars left in the buffer
        while (getchar() != '\n');

        if (ch == 'q'){ 
            break;
        }


        int value;
        printf("Enter new value: ");
        scanf("%d", &value);

        // if (head != NULL) {
            // struct Node *temp = createNode(value);
            // head->next = temp;
        // }
        struct Node *curr = head;

        while (curr != NULL) {
            struct Node *temp = createNode(value);

            if (curr->next == NULL) {
                curr->next = temp;
            }
            curr = curr->next;
        }





    }


    displayList(head);

    return 0;
}