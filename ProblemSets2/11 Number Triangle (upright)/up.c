#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n (1–9): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
