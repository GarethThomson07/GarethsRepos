#include <stdio.h>

long fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%ld\n", fib(n));
    return 0;
}
