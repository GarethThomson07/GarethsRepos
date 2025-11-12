/*
Write a function that riases an integer to a positive integer power. Name the function
x_to_the_n( ). Have the function return a long int, which represents the result
of calculating xn.
*/

#include <stdio.h>
#include <math.h>

long int x_to_the_n(long int n, long int x);

int main(void)
{
    long int n, x;
    printf("what number ");
    scanf("%i", &x);
    printf("too what? ");
    scanf("%i", &n);
    printf("it gives the value %i", x_to_the_n(n, x));
}

long int x_to_the_n(long int n, long int x)
{
    return pow(x, n);
}