#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create(int data) {
    struct node *new = (struct node *)malloc(sizeof(struct node));

    new->data = data;
    new->next = NULL;

    return new;

}

void display(struct node *head) {
	struct node *curr = head;

	while (curr!=NULL) {
		printf("%d ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}

struct node *reverse(struct node *head) {
	struct node *curr = head;
	struct node *prev = NULL;
	struct node *next = NULL;

	while (curr != NULL) {
		next = curr->next;
        curr->next = prev;
		prev = curr;

		curr = next;
	}

	curr = prev;
	return curr;

}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));    
    head->data = 12; 
    head->next = create(10); 
    head->next->next = create(20);
	
    head=reverse(head);
    display(head);
	return 1;
}

