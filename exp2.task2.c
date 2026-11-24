#include <stdio.h>
int main()
{
    int start, end, i, sum = 0, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &start, &end);

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    for (i = start; i <= end; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}