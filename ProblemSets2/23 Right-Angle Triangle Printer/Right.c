#include <stdio.h>

void Triangle(int length, char ch)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%c", ch);
        printf("\n");
    }
}

int main(void)
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    Triangle(n, c);
    return 0;
}
