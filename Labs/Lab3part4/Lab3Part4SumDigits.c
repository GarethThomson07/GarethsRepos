#include <stdio.h>


int main(void)
{

int sum=0;
int i, n;

scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum += i*i;
}

printf("%d",sum);

return 0;
}