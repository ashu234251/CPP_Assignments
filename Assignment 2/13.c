/*
13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a 3 Digit Number\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    x=y*100+x;
    printf("Required Number is %d",x);
    return 0;

}