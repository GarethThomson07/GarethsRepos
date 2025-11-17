#include <stdio.h>

int sign(int n)
{
    if (n > 0)
        return 1;
    if (n < 0)
        return -1;
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sign(n));
    return 0;
}
