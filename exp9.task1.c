#include <stdio.h>

struct student_record
{
    char name[30];
    int roll_number;
    float total_marks;
};

int main()
{
    struct student_record s[5];
    int i, top = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name, roll no. and marks: ");

        scanf("%29s%d%f", s[i].name,
              &s[i].roll_number,
              &s[i].total_marks);

        if (i == 0 || s[i].total_marks > s[top].total_marks)
            top = i;
    }

    printf("Topper: %s\nRoll No: %d\nMarks: %.2f\n",
           s[top].name,
           s[top].roll_number,
           s[top].total_marks);

    return 0;
}