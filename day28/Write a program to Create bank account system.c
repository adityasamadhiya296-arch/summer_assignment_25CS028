#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    while (1)
    {
        printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Amount: ");
            scanf("%f", &amount);
            a.balance += amount;
            break;

        case 2:
            printf("Enter Amount: ");
            scanf("%f", &amount);
            if (amount <= a.balance)
                a.balance -= amount;
            else
                printf("Insufficient Balance\n");
            break;

        case 3:
            printf("\nAccount Number: %d\n", a.accNo);
            printf("Name: %s\n", a.name);
            printf("Balance: %.2f\n", a.balance);
            break;

        case 4:
            return 0;
        }
    }
}