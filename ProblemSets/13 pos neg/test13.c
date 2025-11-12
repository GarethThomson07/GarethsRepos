/*
Write a function to check whether a number is Positive or Negative or Zero. It
returns 1 if positive, -1 if negative and 0 if zero.
*/

#include <stdio.h>

int func(int n);

int main(void)
{
    int n;
    printf("what number ");
    scanf("%i", &n);
    printf("it gives the value %i", func(n));
}

int func(int n)
{

    if (n > 0)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
}