#include <stdio.h>

double power(double x, int y)
{
    if (y == 0)
        return 1.0;
    return x * power(x, y - 1);
}

int main(void)
{
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    printf("%.4f\n", power(x, y));
    return 0;
}
