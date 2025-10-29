#include <stdio.h>

int main(void)
{
    int i;
    double num, sum = 0, min, max;
    printf("enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &num);
        if (i == 0)
        {
            min = max = num;
        }
        else
        {
            if (num < min)
                min = num;
            if (num > min)
                max = num;
        }
        sum += num;
    }
    printf("sum = %.2lf\n", sum);
    printf("avarage = %.2lf\n", sum / 10);
    printf("min = %.2lf\n", min);
    printf("max = %.2lf\n", max);

    return 0;
}