/*Write a program to output the number of digits in an input long integer number as well as the sum the digits
in that input. For example, if the input number is 70351 the program prints to the screen:
The input number is 70351 it has 5 digits and the sum of its digit are 16*/

#include <stdio.h>

int main(void)
{

    int n = 0, digit, sum = 0, count = 0;

    printf("your digit?");
    scanf("%i", &n);
    printf("the input number is %i", n);
    while (n != 0)
    {
        digit = n % 10; // extract last digit
        sum += digit;   // add to sum
        count++;        // count the digits
        n /= 10;        // remove last digit
    }

    printf(" it has %i digits and the sum of the digits are %i", count, sum);

    return 0;
}
