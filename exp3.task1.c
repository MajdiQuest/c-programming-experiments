#include <stdio.h>
int main()
{
    int choice, marks;

start:
    printf("\n1. Enter marks and grade\n");
    printf("2. Check result\n");
    printf("3. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter marks (0-100): ");
            scanf("%d", &marks);

            if (marks >= 90)
                printf("Grade: A\n");
            else if (marks >= 75)
                printf("Grade: B\n");
            else if (marks >= 60)
                printf("Grade: C\n");
            else if (marks >= 40)
                printf("Grade: D\n");
            else
                printf("Grade: F\n");

            goto start;

        case 2:
            printf("Enter marks: ");
            scanf("%d", &marks);

            printf("%s\n", marks >= 40 ? "Pass" : "Fail");

            goto start;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
            goto start;
    }

    return 0;
}