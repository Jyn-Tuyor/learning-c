#include <stdio.h>

void file_reader(char file_name[]) {
    FILE *fptr;
    fptr = fopen(file_name, "r");

    char ch;

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);
}

int main() {
    file_reader("text.txt");
    return 0;
}