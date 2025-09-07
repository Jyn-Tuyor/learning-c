#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 100

struct Accounts
{
    char name[MAX_BUFFER];
    int id;
    float balance;
};

void add_account(int *total_accounts, struct Accounts accounts[])
{
    // clear the buffer
    while (getchar() != '\n')
    {
    };

    char name_buffer[MAX_BUFFER];

    printf("Enter account name: ");

    fgets(name_buffer, sizeof(name_buffer), stdin);

    // printf("Ente")
    // scanf("")

    float balance = 0.00;
    int acc_id = rand();
    // accounts[*(total_accounts)].name = name_buffer;
    strcpy(accounts[*(total_accounts)].name, name_buffer);

    accounts[*(total_accounts)].id = acc_id;
    accounts[*(total_accounts)].balance = balance;

    (*total_accounts)++;
}

void display_accounts(int total_accounts, struct Accounts accounts[])
{

    printf("Total accounts: %d\n", total_accounts);

    for (int i = 0; i < total_accounts; i++)
    {
        printf("\nAccount Name: %s", accounts[i].name);
        printf("Account ID: %d\n", accounts[i].id);
        printf("Account Balance: %f\n", accounts[i].balance);
    }
}

int main()
{
    int total_accounts = 0;
    struct Accounts accounts[MAX_BUFFER];
    int input;

    system("cls");
    printf("==============Banking Shit==============\n");

    printf("\n[1] Add new account\n");

    scanf("%d", &input);
    // fflush(stdin);

    switch (input)
    {
    case 1:
        add_account(&total_accounts, accounts);
        display_accounts(total_accounts, accounts);
        break;

    default:
        break;
    }

    return 0;
}