/*
Write a function that reads three double values and returns their sum*/

#include <stdio.h>
float a, b, c, d, sum;
float sum1(float a, float b, float c);
int main(void)
{

    printf("whats number 1");
    scanf("%f", &a);
    printf("whats number 2");
    scanf("%f", &b);
    printf("whats number 3");
    scanf("%f", &c);
    printf("sum is %.3f", sum1(a,b,c));
}

float sum1(float a, float b, float c)
{
    return a + b + c;
}