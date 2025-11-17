/*In a gymnastics competition, each contestant’s score is calculated by dropping the lowest and highest
scores and then adding the remaining scores. Write a program that allows the user to enter eight
judges’ scores (in an Array) and then outputs the points received by the contestant and their average
score. A judge awards points between 1 and 10, with 1 being the lowest and 10 being the highest.
For example, if the scores are: 9.2, 9.3, 9.0, 9.9, 9.5, 9.5, 9.6 and 9.8, then the contestant receives a
total of 56.9 points (as the 9.0 and the 9.9 are dropped and we sum the remaining) and an average
score of 9.48. Note: You must use array in your solution for this problem*/

#include <stdio.h>

int max(int input[], int size);
int min(int input[], int size);
int sum(int input[], int size);

int main(void)
{
    int i, total, avg, a;
    int input[8];

    printf("input 8 numbers \n");
    for (i = 0; i < 8; i++)
    {
        printf("number %i:\n", i + 1);
        scanf("%i", &a);
        input[i] = a;
    }

    printf("your 8 numbers are \n");
    for (i = 0; i < 8; i++)
    {
        printf(" %i", input[i]);
    }

    int max1 = max(input, 8);
    int min1 = min(input, 8);
    int sum1 = sum(input, 8);

    total = sum1 - min1 - max1;
    avg = total / 6;

    printf("\nthe total is %i\n", total);
    printf("the average is %i\n", avg);
    return 0;
}

int max(int input[], int size)
{
    int i;
    int max = input[0];
    for (i = 0; i < size; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }
    return max;
}

int min(int input[], int size)
{
    int i;
    int min = input[0];
    for (i = 0; i < size; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    return min;
}

int sum(int input[], int size)
{
    int sum, i, j;
    int total = 0;
    for (i = 0; i < size; i++)
    {
        total += input[i];
    }
    return total;
}
