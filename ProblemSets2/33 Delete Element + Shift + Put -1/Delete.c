/*
Write a program to delete an element from a specified location from an Array, then shift the rest of
the array one cell up and put a -1 at the end of the array. so for example if Arr[7]=10, 20, 30, 40,
50, 60, 70 and the element the user wants to delete is on location 2, then item 30 in location 2 is to
be removed, and the array should become Arr = 10, 20, 40, 50, 60, 70 and -1.
*/

#include <stdio.h>

int main()
{
int Arr[7]={10, 20, 30, 40,50, 60, 70};
int a,i;
int size=7;
printf("what do you want deleted");
scanf("%i",&a);
a= a-1;
printf("your original is:\n");
for(i=0;i<size;i++)
{
printf("%i, ",Arr[i]);
}

for(i=a;i<size;i++)
{
Arr[i]=Arr[i+1];
}
Arr[size-1]= -1;
printf("\nyour new array is\n");
for(i=0;i<size;i++)
{
printf("%i, ",Arr[i]);
}
}