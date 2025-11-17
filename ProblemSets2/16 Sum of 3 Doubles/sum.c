#include <stdio.h>

double sum3(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    return a + b + c;
}

int main(void)
{
    printf("Sum = %.2f\n", sum3());
    return 0;
}
