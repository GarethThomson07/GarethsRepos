#include <stdio.h>

int main(void)
{
int i=0;
double N,sum;

printf("enter number");
scanf("%lf", &N);
for(i=0;i<N;i++)
{
sum+=N*N;
}
printf("%f",sum);
}