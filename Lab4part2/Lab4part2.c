#include <stdio.h>
int main(void)
{
    // Declare the variable int inputnumber
    int inputnumber;
    // Display the message: Enter a number (less than 10000)
    printf("Enter a number (less than 10000):");
    // Read the input number from the user and store it in 'inputnumber'
    scanf("%i", &inputnumber);
    if (0 < inputnumber && inputnumber < 10000)
    {
        int digit1 = (inputnumber / 10000) % 10;
        int digit2 = (inputnumber / 1000) % 10;
        int digit3 = (inputnumber / 100) % 10;
        int digit4 = (inputnumber / 10) % 10;
        int digit5 = inputnumber % 10;
        // if statement to check if all digits are not 0
        if (digit1 != 0 && digit2 != 0 && digit3 != 0 && digit4 != 0 && digit5 != 0)
        {
            printf("Original number: %d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5);
            printf("Reversed number: %d%d%d%d%d\n", digit5, digit4, digit3, digit2, digit1);
        }
        // if statement to check if digit1 is 0 and the next are not 0
        if (digit1 == 0 && digit2 != 0)
        {
            printf("Original number: %d%d%d%d\n", digit2, digit3, digit4, digit5);
            printf("Reversed number: %d%d%d%d\n", digit5, digit4, digit3, digit2);
        }
        // if statement to check if digit1 and digit2 are 0, and the next are not 0
        if (digit1 == 0 && digit2 == 0 && digit3 != 0)
        {
            printf("Original number: %d%d%d\n", digit3, digit4, digit5);
            printf("Reversed number: %d%d%d\n", digit5, digit4, digit3);
        }
        // if statement to check if digit1, digit2, and digit3 are 0, and the next are not 0
        if (digit1 == 0 && digit2 == 0 && digit3 == 0 && digit4 != 0)
        {
            printf("Original number: %d%d\n", digit4, digit5);
            printf("Reversed number: %d%d\n", digit5, digit4);
        }
        // if statement to check if digit1, digit2, digit3, and digit4 are 0, and digit5  are not 0
        if (digit1 == 0 && digit2 == 0 && digit3 == 0 && digit4 == 0 && digit5 != 0)
        {
            printf("Original number: %d\n", digit5);
            printf("Reversed number: %d\n", digit5);
        }
    }
    else
    {
        printf("Invalid Number");
    }
    return 0;
}