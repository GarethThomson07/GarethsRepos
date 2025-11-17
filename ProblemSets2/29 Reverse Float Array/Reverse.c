#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d float values:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        float temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    return 0;
}
