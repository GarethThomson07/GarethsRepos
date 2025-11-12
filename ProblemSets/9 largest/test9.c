/*
Write a function that takes in three float numbers and returns the largest value of
them*/

#include <stdio.h>

float a, b, c;

float large(float a, float b, float c);

int main()
{
    printf("what 1st num");
    scanf("%f", &a);
    printf("what 2nd num");
    scanf("%f", &b);
    printf("what 3rd num");
    scanf("%f", &c);
    printf("%f", large(a, b, c));
}

float large(float a, float b, float c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    if (c > b && c > a)
    {
        return c;
    }
}
