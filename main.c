#include <stdio.h>

int main()
{
    int choice;


    printf("       STUDENT EXPENSE TRACKER\n");


    printf("\n1. Add Expense");
    printf("\n2. View Expenses");
    printf("\n3. Calculate Total");
    printf("\n4. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nAdd Expense selected.\n");
            break;

        case 2:
            printf("\nView Expenses selected.\n");
            break;

        case 3: 
            printf("\nCalculate Total selected.\n");
            break;

        case 4:
            printf("\nThank you!\n");
            break;

        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}
