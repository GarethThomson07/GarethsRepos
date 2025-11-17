#include <stdio.h>

float largest(float a, float b, float c)
{
    float max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main(void)
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("Largest = %.2f\n", largest(x, y, z));
    return 0;
}
