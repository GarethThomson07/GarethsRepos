/*
write a function prime( ) that returns 1 if its argument is a prime number and
returns 0 otherwise
*/

#include <stdio.h>

int prime(int n);

int main(void)
{
    int n;
    printf("what number ");
    scanf("%i", &n);
    printf("your value is %i", prime(n));
}

int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}