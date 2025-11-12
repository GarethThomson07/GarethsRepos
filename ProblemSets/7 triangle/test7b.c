#include <stdio.h>

int main(void)
{
    int num, i, b;
    printf("what num");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {
        for (b = 1; b <= i; b++)
        {
            printf("%i", b);
        }
        printf("\n");
    }

    for (i = num; i >= 1; i--)
    {
        for (b = 1; b <= i; b++)
        {
            printf("%i", b);
        }
        printf("\n");
    }
    return 0;
}