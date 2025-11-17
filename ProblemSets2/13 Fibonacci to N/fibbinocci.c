#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    long f1 = 1, f2 = 1;

    if (n >= 1)
        printf("1 ");
    if (n >= 2)
        printf("1 ");

    for (int i = 3; i <= n; i++)
    {
        long f3 = f1 + f2;
        printf("%ld ", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");
    return 0;
}
