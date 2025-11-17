#include <stdio.h>

long factorial(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%ld\n", factorial(n));
    return 0;
}
