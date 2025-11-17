#include <stdio.h>

int main(void)
{
    long h, m, s;
    long total;

    printf("Enter hours minutes seconds: ");
    scanf("%ld %ld %ld", &h, &m, &s);

    total = h * 3600 + m * 60 + s;

    printf("Total seconds = %ld\n", total);
    return 0;
}
