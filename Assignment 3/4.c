//4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    ((x&1)==0)? printf("Number is an Even Number") : printf("Number is an Odd Number");
    return 0;
}