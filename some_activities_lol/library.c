#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    int total_pages;
    char author[100];
};

int main(void)
{
    system("cls");
    struct book library[100];
    int total_books = 0;
    while (1)
    {
        int input;
        int library_size = sizeof(library)/sizeof(library[0]); 
        printf("\n\t\t==============================");
        printf("\n\n\t\tLibrary Management System\t\t\n");
        printf("\n\t\t[1] Add a book");
        printf("\n\t\t[2] Display\n");
        printf("\n\t\t: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("\n\t\t==============================\n");
            printf("\t\tEnter book name: ");
            scanf("%99s", library[total_books].name);

            printf("\t\tEnter total page: ");
            scanf("%d", &library[total_books].total_pages);

            printf("\t\tEnter author name: ");
            fgets(library[total_books].author, sizeof(library[total_books].author), stdin);
            library[total_books].author[strcspn(library[total_books].author, "\n")] = '\0';
            printf("\t\tBook added!");
            total_books++;
            break;
        case 2:
            system("cls");
            printf("\n\t\t==============================\n");
            printf("\t\t\tAvailable books\n");

            if (total_books > 0) {
                for (int i = 0; i < total_books; i++) {
                    printf("\n");
                    printf("\t\tBook [%d] name: %s\n", i+1, library[i].name);
                    printf("\t\tBook [%d] total pages: %d\n", i+1, library[i].total_pages);
                    printf("\t\tBook [%d] author: %s\n", i+1, library[i].author);
                }
            } else {
                printf("\n\t\tNo books available.");
            }

          

        default:
            break;
        }


    }

    return 0;
}