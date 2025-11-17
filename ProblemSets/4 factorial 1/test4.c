

/*Write a program to compute the factorial of a number using loops. The factorial operation symbol is given by
! and it is to multiply all whole numbers from the chosen number down to 1. For example: factorial 4 is 4! =
4 x 3 x 2 x 1 and equals 24. whereas 5! = 5 . 4 . 3 . 2 . 1 = 120
By definition 0! = 1 and the factorial of negative numbers is undefined.
*/



#include <stdio.h>

int main(void){

double sum=1;
int i,n;

printf("what number do you want \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum *= i;

}

printf("its %f",sum);
return 0;
}
