#include <stdio.h>
int main()
{
    float p, c, m, avg;

    printf("Enter Physics, Chemistry and Maths marks: ");
    scanf("%f%f%f", &p, &c, &m);

    avg = (p + c + m) / 3;

    printf("Average = %.2f\n", avg);
    printf("%s", avg >= 50 ?
           "Eligible for admission\n" :
           "Not eligible for admission\n");

    return 0;
}