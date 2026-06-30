#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, id, i;

    while (1)
    {
        printf("\n1.Add Book\n2.View Books\n3.Issue Book\n4.Return Book\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);
            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);
            b[n].issued = 0;
            n++;
            break;

        case 2:
            printf("\nBook List\n");
            for (i = 0; i < n; i++)
                printf("%d\t%s\t%s\n", b[i].id, b[i].name,
                       b[i].issued ? "Issued" : "Available");
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
                if (b[i].id == id)
                    b[i].issued = 1;
            break;

        case 4:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
                if (b[i].id == id)
                    b[i].issued = 0;
            break;

        case 5:
            return 0;
        }
    }
}