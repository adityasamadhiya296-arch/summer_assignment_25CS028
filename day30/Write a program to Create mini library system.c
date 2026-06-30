#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i, searchId, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Title: ");
        scanf("%s", b[i].title);

        printf("Enter Author: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Records\n");
    printf("ID\tTitle\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n",
               b[i].id,
               b[i].title,
               b[i].author);
    }

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++)
    {
        if(searchId == b[i].id)
        {
            printf("\nBook Found\n");
            printf("Title : %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found\n");

    return 0;
}