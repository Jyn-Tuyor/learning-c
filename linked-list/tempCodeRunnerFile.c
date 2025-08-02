if (head->next == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *curr = head;
    printf("Linked list elements : \n");
    while (curr->next