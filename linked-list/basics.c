#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int value;
    struct Node *next; // this points to another Node type
} Node;

// Node *new_node(int data, Node *prev) {
//     Node *node = (Node *)malloc(sizeof(Node));
    
//     if (node == NULL) {
//         printf("Memory is not allocated\n");
//         exit(1);
//     }

//     node->data = data;
//     node->prev = prev;

//     return node;

// }

int main(int argc, char* argv[]) {
    Node head;
    head.value = 12;
    head.next = malloc(sizeof(Node));

    head.next->value = 13;
    head.next->next = NULL;


    printf("First: %d\n", head.value);
    printf("Second: %d\n\n", head.next->value);


    // Iterating
    Node *curr = &head;

    while (curr != NULL) {
        printf("%d\n", curr->value);
        curr = curr->next;
    }

    return 0;
}

