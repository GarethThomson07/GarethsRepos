#include <stdio.h>

void printStars(int n)
{
    for (int i = 0; i < n; i++)
        printf("*");
    printf("\n");
}

int main(void)
{
    printStars(5);
    printStars(10);
    return 0;
}
