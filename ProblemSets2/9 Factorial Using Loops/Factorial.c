#include <stdio.h>

int main(void)
{
    int n;
    long fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial undefined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d is %ld\n", n, fact);
    return 0;
}
