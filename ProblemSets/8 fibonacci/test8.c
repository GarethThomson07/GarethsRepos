/*Fibonacci Sequence Enter a number and have the program generate the Fibonacci sequence to the Nth
number. The Fibonacci numbers are the sequence of numbers Fn∞
n=1 defined by the linear recurrence equation
Fn = Fn−1 + Fn−2 with F1 = F2 = 1. For example, the sequence up to n = 8 is 1, 1, 2, 3, 5, 8, 13, 21*/

#include <stdio.h>

int main(void)
{

    int i, n, one=0, two=1, next;

    printf("what num you want");
    scanf("%i", &n);

    for (i = 1; i<n; i++)
    {
        printf("%i ", one);
        next = one + two;
        one = two;
        two = next;
    }
}