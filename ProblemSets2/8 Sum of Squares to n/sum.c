#include <stdio.h>

int main(void)
{
    int n;
    long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    printf("Sum of squares = %ld\n", sum);
    return 0;
}
