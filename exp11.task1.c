#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e;
    FILE *fp;

    fp = fopen("employee.txt", "w");

    if (fp == NULL)
    {
        printf("File error\n");
        return 1;
    }

    printf("Enter employee ID, name and salary: ");
    scanf("%d%29s%f", &e.id, e.name, &e.salary);

    fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);

    fclose(fp);

    fp = fopen("employee.txt", "r");

    if (fp == NULL)
        return 1;

    printf("Employee record:\n");

    while (fscanf(fp, "%d%29s%f",
                  &e.id, e.name, &e.salary) == 3)
    {
        printf("ID: %d Name: %s Salary: %.2f\n",
               e.id, e.name, e.salary);
    }

    fclose(fp);

    return 0;
}