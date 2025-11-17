#include <stdio.h>

long power(int x, int n)
{
    long result = 1;
    for (int i = 0; i < n; i++)
        result *= x;
    return result;
}

int main(void)
{
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%ld\n", power(x, n));
    return 0;
}
