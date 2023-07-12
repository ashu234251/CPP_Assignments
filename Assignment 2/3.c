//3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers x and y\n");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Value of x is %d and Value of y is %d",x,y);
    return 0;
}