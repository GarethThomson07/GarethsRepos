/*Write a C program to return multiple values from a function. Follow the instructions below:
(a) Create a function called getMinMaxAvg() that receives 5 parameters (an array, the size of the
array, a pointer called min, another pointer called max, another pointer called average)
(b) In main() let the user enter the size of the array and enter the elements in the array.
(c) Let main() call getMinMaxAvg.
(d) The function getMinMaxAvg() will return the minimum value of the array received and the
maximum value in the array as well as the average of all the values in the array to the calling
function.*/

#include <stdio.h>
void getMinMaxAvg(int array[], int size, double *min, double *max, double *avg);

int main()
{
    int size, i;
    double min, max;
    double avg;
    printf("what size of array");
    scanf("%i", &size);
    int array[size];
    printf("input elemets:\n");
    for (i = 0; i < size; i++)
    {
        printf("input %i", i);
        scanf("%i", &array[i]);
    }
    getMinMaxAvg(array, size, &min, &max, &avg);

    printf("your min value is %lf\n", min);
    printf("your max value is %lf\n", max);
    printf("your avg value is %lf\n", avg);

    return 0;
}

void getMinMaxAvg(int array[], int size, double *min, double *max, double *avg)
{
    double sum = 0;
    int i;
    *min = array[0];
    *max = array[0];

    for (i = 0; i < size; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }
    }

    for (i = 0; i < size; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }

    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    *avg = (double)sum / size;
}