#include <stdio.h>
int main(void)
{
float BillAmount, tipPercentage, numPeople, tipAmount, totalBill, amountPerPerson;
printf("Enter the original bill amount: ");
scanf("%f", &BillAmount);
printf("Enter the tip percentage: ");
scanf("%f", &tipPercentage);
printf("Enter the number of people splitting the bill: ");
scanf("%f", &numPeople);
tipAmount = (BillAmount * tipPercentage) / 100;
totalBill = (BillAmount + tipAmount);
amountPerPerson = (totalBill / numPeople);
printf("The total bill including tip is: %.2f\n", totalBill);
printf("Each person should pay: %.2f\n", amountPerPerson);


return 0;
}
