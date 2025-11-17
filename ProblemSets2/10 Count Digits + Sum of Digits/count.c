#include <stdio.h>

int main(void)
{
    long num, temp;
    int count = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%ld", &num);

    temp = num;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
        count++;
    }

    printf("The input number is %ld, it has %d digits and the sum of its digits is %d\n",
           num, count, sum);

    return 0;
}
