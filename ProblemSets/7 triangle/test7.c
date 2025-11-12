/*Use nested loops that print the following patterns for any entered number (numbers are between 1 and 9). For
example: The pattern when the entered number is 6
1
12
123
1234
12345
123456
Change the nested loops to print the pattern upsidedown i.e.
123456
12345
1234
123
12
1
Consider generalizing the code to any given number and not just 6*/

#include <stdio.h>

int main(void)
{

    int n, row, col;

    printf("Enter a number between 1 and 9: ");
    scanf("%d", &n);

    // Ascending triangle
    printf("\nNormal Triangle:\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // Upside-down triangle
    printf("\nUpside-down Triangle:\n");
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

/*
    for (i = 1; i <= num; i++)
    {
        pr = i;
        prev = pr,++pr;
        printf("%i%i\n",prev,pr);
    }




        int num, i, pr, prev,next;
    printf("what num");
    scanf("%i", &num);
    printf("1\n");
    for (i = 2; i <= num; i++)
    {
        pr = i;
        prev = pr,++pr;
        printf("%i\n",prev);
        next=prev+pr;
        printf("%i\n",next);

    }



*/