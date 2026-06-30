#include <stdio.h>

int main()
{
    int seats = 10;
    int choice, book, cancel;

    while (1)
    {
        printf("\nAvailable Seats: %d\n", seats);
        printf("1.Book Ticket\n");
        printf("2.Cancel Ticket\n");
        printf("3.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of tickets: ");
            scanf("%d", &book);

            if (book <= seats)
            {
                seats -= book;
                printf("Booking Successful\n");
            }
            else
            {
                printf("Seats Not Available\n");
            }
            break;

        case 2:
            printf("Enter tickets to cancel: ");
            scanf("%d", &cancel);
            seats += cancel;
            printf("Cancellation Successful\n");
            break;

        case 3:
            return 0;
        }
    }
}