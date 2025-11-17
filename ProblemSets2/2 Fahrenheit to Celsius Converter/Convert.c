#include <stdio.h>

int main(void)
{
    double F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &F);

    C = 5.0 * (F - 32.0) / 9.0;

    printf("Celsius = %.2f\n", C);
    return 0;
}
