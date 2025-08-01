#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *create_node(int data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Memory could not be allocated\n");
        exit(1); 
    }

    new_node->data = data;
    new_node->next = NULL;


    return new_node;

}

int main() {

    struct Node *head = create_node(5);


    return 0;
}