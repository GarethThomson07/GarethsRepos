#include <stdio.h>

int main(void)
{
    double sales;
    double base = 5000.0;
    double commission;
    double salary;

    printf("Enter your sales amount: ");
    scanf("%lf", &sales);

    if (sales < 10000)
        commission = sales * 0.05;
    else if (sales <= 20000)
        commission = sales * 0.10;
    else
        commission = sales * 0.15;

    salary = base + commission;

    printf("Base salary : $%.2f\n", base);
    printf("Commission  : $%.2f\n", commission);
    printf("Total salary: $%.2f\n", salary);

    return 0;
}
