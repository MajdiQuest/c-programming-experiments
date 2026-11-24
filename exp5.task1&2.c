#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Iterative: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\nRecursive: ");

    for (i = 0; i < n; i++)
        printf("%d ", fib(i));

    printf("\n");

    return 0;
}