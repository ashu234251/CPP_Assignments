//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
     int x,y;
     printf("Enter two Numbers\n");
     scanf("%d%d",&x,&y);
     x=x+y;
     y=x-y;
     x=x-y;
     printf("After Swapping, Value of x is %d and Value of y is %d",x,y);
     return 0;
}