/*
10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Number\n");
    scanf("%d",&x);
    y=x/10;
    x=y*10;
    printf("Required Number is %d",x);
    return 0;
} 