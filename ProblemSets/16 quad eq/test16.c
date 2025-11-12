/*
An equation of the form ax2 + bx + c = 0 is known as a quadratic equation. The
values of a, b, and c in represent constant coefficient values. The value of x that
satisfies a particular quadratic equation, known as the roots of the equation, can be
calculated by substituting the values of a, b, and c into the following formula:
x = −b ± sqrt(b2 − 4ac)
2a
Page 2
If the value of b2 − 4ac, called the discriminant, is less than zero the roots of the
equation x1 and x2 are imaginary numbers. Write a program to solve a quadratic
equation. The program should allow the user to enter the values for a, b, and c. If
the discriminant is less than zero, a message should be dispalyed that the roots are
imaginary; otherwise, the program should then proceed to calculate and display
the tow roots of the equation.Note Be certain to make your program as modular as
possible, i.e. making use of user defined functions whenever possible
*/

#include <stdio.h>
#include <math.h>
float a, b, c;

float quad(float a, float b, float c);

int main()
{
    printf("what 1st num");
    scanf("%f", &a);
    printf("what 2nd num");
    scanf("%f", &b);
    printf("what 3rd num");
    scanf("%f", &c);
    printf("your roots are %f, and %f", quad(a, b, c),quad(a, b, c));
}

float quad(float a, float b, float c)
{
int x1,x2,d;

x1 = (-b - sqrt(pow(b,2) - 4*a*c))/2;
x2 = (-b + sqrt(pow(b,2) - 4*a*c))/2;
d = pow(b,2) - 4*a*c;

if(d<=0)
{
printf("roots are imaginary");
}
if(d>0)
{
return x1;
return x2;
}

}




/*
not complete

*/