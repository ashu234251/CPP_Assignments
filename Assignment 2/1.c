//1. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    printf("Unit digit of Number is %d",x%10);
    return 0;
}