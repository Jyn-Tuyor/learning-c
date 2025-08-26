#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void add_diary();

int main(void)
{
    while (1)
    {
        system("cls");
        printf("\n\n\t\t=============Diary=============\n");
        printf("\t\t\t[1] Add diary\n");

        int choice;

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getchar();
            add_diary();
            break;

        default:
            break;
        }


    }

    return 0;

}

void add_diary()
{
    printf("Enter new diary title: ");
    char buffer[100];

    scanf("%99s", &buffer);

    char file_name[104];
    sprintf(file_name, "%s.txt", buffer);

    FILE *fptr = fopen(file_name, "w");

    if (!fptr)
    {
        printf("Error creating file.");
        return;
    };

    printf("\t\tFile %s created.\n", file_name);

    printf("\t\tEnter diary content\n");

    getchar();
    char content_buffer[100];

    fgets(content_buffer, sizeof(content_buffer), stdin);

    fprintf(fptr, content_buffer);

    fclose(fptr);

    printf("\nDiary successfully created!");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF); // flush until newline

    printf("\nPress SPACE to continue...");
    char will_continue;
    
    do {
        will_continue = getchar();
    } while (will_continue != ' ' && will_continue != EOF);
}