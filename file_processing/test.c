#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <dirent.h>
// dirent should be use to implement the "listing out the files in the dir"
// but im too lazy to download or set up it lol
// -lazy af

void add_diary();
void read_diary();


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
}

void read_diary() {
    // TODO: list out diares

}