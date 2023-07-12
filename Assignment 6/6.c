// 6. Write a program to calculate factorial of a number

#include<stdio.h>
 int main()
 {
    int n,i,fa=1;
    printf("Enter Value of N : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       fa=fa*i;
    }
    printf("Factorial of %d is %d",n,fa);
    return 0;
 }