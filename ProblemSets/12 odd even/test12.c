/*
Write a function to check whether a number is Even or Odd. It returns 1 if Even,
and 0 if Odd.

*/
#include <stdio.h>

int oddeven(int n);

int main(void)
{
    int n;
    printf("what num");
    scanf("%i", &n);
    printf("youre number gives an output of %i", oddeven(n));
}

int oddeven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}