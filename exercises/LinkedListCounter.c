#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *traverse(struct node *head) {
    struct node *curr = head;

    while (curr->next != NULL) {
        curr = curr->next;
    }


    return curr;
}
void display(struct node *head) {
	struct node *curr = head;

	while (curr!=NULL) {
		printf("%d ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}
struct node *create(int data) {
    struct node *new = (struct node *)malloc(sizeof(struct node));

        new->data = data;
        new->next = NULL;
        return new;

}


int main() {
    int amount;
    int data;
    struct node *head = NULL;
    printf("Input the number of nodes: ");
    scanf("%d", &amount);


    for (int i = 0; i < amount; i++) {
        printf("Data = ");
        scanf("%d", &data);
        
        if (head == NULL) {
            head = create(data);
        } else {
            struct node *new = create(data);
            struct node *last_element = traverse(head);

           last_element->next = new; 
        }
    
    }

    display(head);
    return 0;
}