/*
Write a function that computes the mathematical exponential function (power) so
it returns xy where x is float and y is an integer value ≥ 0 that are passed to it.
(a) using iterative sequential top down approach.
(b) using recursive approach.
*/

#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("what num ");
    scanf("%i", &n);
    printf("youre number gives an output of %i", factorial(n));
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}