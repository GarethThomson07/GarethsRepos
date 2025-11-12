/*
Write a C program to return multiple values from a function. Follow the instructions below:
(a) Create a function called getMinMaxAvg() that receives 5 parameters (an array, the size of the
array, a pointer called min, another pointer called max, another pointer called average)
(b) In main() let the user enter the size of the array and enter the elements in the array.
(c) Let main() call getMinMaxAvg.
(d) The function getMinMaxAvg() will return the minimum value of the array received and the
maximum value in the array as well as the average of all the values in the array to the calling
function
*/

#include <stdio.h>

void getMinMaxAvg(int arr[], int sz, int *min, int *max, double *avg);

int main(void)
{

    int n, i;
    printf("what size ");
    scanf("%i", &n);

    float arr[n];

    for (i = 0; i < n; i++)
    {
        printf("element: ");
        scanf("%f", &arr[i]);
    }

    printf("youre number gives an output of %i", getMinMaxAvg());
}

void getMinMaxAvg(int arr[], int sz, int *min, int *max, double *avg)
{
    if (sz <= 0)
    {
        *min = *max = 0;
        *avg = 0.0;
        return;
    }
    long sum = 0;
    *min = *max = arr[0];
    for (int i = 0; i < sz; ++i)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
        sum += arr[i];
    }
    *avg = (double)sum / sz;
}