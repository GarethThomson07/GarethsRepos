/*
Write a function to return the ASCII value of a character.
*/

#include<stdio.h>

int ASCII (char c);

int main(void){
char c;
printf("what charechter");
scanf("%c",&c);
printf("ASCII is %d", ASCII(c));

}

int ASCII (char c){

return (int)c;

}