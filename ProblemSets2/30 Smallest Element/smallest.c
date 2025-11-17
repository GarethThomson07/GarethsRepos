#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d non-negative integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
        else if (arr[i] == min)
        {
            index = i; // last occurrence
        }
    }

    printf("The minimum element is %d and it's in location %d\n", min, index);

    return 0;
}
