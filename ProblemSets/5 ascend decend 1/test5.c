/*Write a program to input an integer n, between 1 and 9, and print a line of output consisting of ascending
digits from 1 to n, followed by descending digits from (n-1) to 1. For example, n=5 produces the following
output:
123454321*/

#include <stdio.h>

int main(void)
{

    int i, n, sum;

    printf("what number");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%i", i);
    }

    for (i = n-1; i >= 1; i--)
    {
        printf("%i", i);
    }

    return 0;
}