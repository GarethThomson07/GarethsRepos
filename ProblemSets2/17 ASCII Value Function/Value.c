#include <stdio.h>

int ascii_value(char c)
{
    return (int)c;
}

int main(void)
{
    char c;
    scanf(" %c", &c);
    printf("ASCII = %d\n", ascii_value(c));
    return 0;
}
