/* Lab7 Part2 : analysis of text */

#include <stdio.h>
#include <string.h>
#define MAX 1000 /* The maximum number of characters in a line of input */
char text[MAX], c;
int i;
int lowercase, uppercase, digits, other;
int length;
void forward(void);
void backwards(void);
void palindrome(void);

int main()
{

    puts("Type some text (then ENTER):");

    /* Save typed characters in text[]: */
    for (i = 0; i < MAX; i++)
    {
        text[i] = getchar();
        if (text[i] == '\n')
            break;
    }
    length = i; // Actual length of input string

    /* Analyze contents of text[]: */
    for (i = lowercase = uppercase = digits = other = 0; i < length; i++)
    {
        c = text[i];
        if (c >= 'a' && c <= 'z')
            lowercase++;
        else if (c >= 'A' && c <= 'Z')
            uppercase++;
        else if (c >= '0' && c <= '9')
            digits++;
        else
        {
            if (c == '\n')
                break;
            other++;
        }
    }

    /* Print header then call forward() which prints text[] */
    puts("\nYou typed:");
    printf("\n");
    forward();
    printf("\n");
    printf("your input in revrse is\n");
    backwards();
    printf("\n");
    palindrome();
    printf("A string with %d characters\n", length);
    printf("%d lower case letters\n", lowercase);
    printf("%d upper case letters\n", uppercase);
    printf("%d digits\n", digits);
    printf("%d others\n", other);
}

void forward(void)
{
    int j;
    for (j = 0; j < length; j++)
        putchar(text[j]);
}

void backwards(void)
{
    int b;
    for (b = length - 1; b >= 0; b--)
        putchar(text[b]);
}

void palindrome(void)
{
    int j;
    int b;
    for (b = 0, j = length - 1; b < j; b++, j--)
    {
        if (text[b] != text[j])
        {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("You have a palindrome\n");
}
