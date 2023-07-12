// 6. Write a recursive function to calculate factorial of a given number

#include<stdio.h>

int factorial(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));

    return 0;
}

int factorial(int n)
{
    int f=1;

    if(n>0)
    f=n*factorial(n-1);

    return f;
}