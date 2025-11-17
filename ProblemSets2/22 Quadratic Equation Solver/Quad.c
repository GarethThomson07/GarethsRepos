#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("Not quadratic\n");
        return 0;
    }

    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        printf("Imaginary roots\n");
    }
    else
    {
        double r1 = (-b + sqrt(D)) / (2 * a);
        double r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots: %.4f %.4f\n", r1, r2);
    }

    return 0;
}
