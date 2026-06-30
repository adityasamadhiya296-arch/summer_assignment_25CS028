#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i;
    char search[50];

    while (1)
    {
        printf("\n1.Add Contact\n");
        printf("2.View Contacts\n");
        printf("3.Search Contact\n");
        printf("4.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Enter Phone: ");
            scanf("%s", c[n].phone);

            n++;
            break;

        case 2:
            printf("\nContact List\n");
            for (i = 0; i < n; i++)
                printf("%s\t%s\n", c[i].name, c[i].phone);
            break;

        case 3:
        {
            int found = 0;

            printf("Enter Name: ");
            scanf(" %[^\n]", search);

            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, search) == 0)
                {
                    printf("Name : %s\n", c[i].name);
                    printf("Phone: %s\n", c[i].phone);
                    found = 1;
                }
            }

            if (!found)
                printf("Contact Not Found\n");

            break;
        }

        case 4:
            return 0;
        }
    }
} 