//1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    x>0? printf("Number is Positive") : printf("Number is non-positive");
    return 0;
}