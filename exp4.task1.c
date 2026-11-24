#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int a, b, i, t;

    printf("Enter range: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    printf("Prime numbers: ");

    for (i = a; i <= b; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}