/*Enter number to convert to base 2: 13<enter>
The four digits of that number are as follows:
Most significant digit: 1
Next digit: 1
Next digit: 0
Least significant digit: 1
*/
#include <stdio.h>
int main(void)
{
    int inputnumber;
    printf("Enter number to convert to base 2:");
    scanf("%i", &inputnumber);
    if (0 < inputnumber && inputnumber <= 15)
    {
        int digit1 = (inputnumber / 8) % 2;
        int digit2 = (inputnumber / 4) % 2;
        int digit3 = (inputnumber / 2) % 2;
        int digit4 = inputnumber % 2;
        printf("The four digits of that number are as follows: ");
        printf("\nMost significant digit: %d", digit1);
        printf("\nNext digit: %d", digit2);
        printf("\nNext digit: %d", digit3);
        printf("\nLeast significant digit: %d\n", digit4);
    }
    else
    {
        printf("Number must be greater than 16");
    }
    return 0;
}