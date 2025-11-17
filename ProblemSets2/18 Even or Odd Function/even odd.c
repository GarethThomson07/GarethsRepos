#include <stdio.h>

int isEven(int n)
{
    return (n % 2 == 0);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf(isEven(n) ? "Even\n" : "Odd\n");
    return 0;
}
