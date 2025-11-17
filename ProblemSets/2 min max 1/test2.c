#include <stdio.h>

int main(void)
{
    int i;
    int N;
    double num, sum = 0, min, max;
    printf("enter amount of numbers:\n");
    scanf("%i", &N);
    printf("enter %i numbers", N);
    for (i = 0; i < N; i++)
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
    printf("avarage = %.2lf\n", sum / N);
    printf("min = %.2lf\n", min);
    printf("max = %.2lf\n", max);

    return 0;
}