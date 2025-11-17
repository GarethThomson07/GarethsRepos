#include <stdio.h>

double power(double x, int y)
{
    double result = 1.0;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main(void)
{
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    printf("%.4f\n", power(x, y));
    return 0;
}
