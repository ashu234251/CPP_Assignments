// 8. Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>

int fibonacci(int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    fibonacci(n);
    return 0; 
}

int fibonacci(int n)
{
    int a;

    if(n==0 || n==1)
      return n;

    a=fibonacci(n-1)+fibonacci(n-2);
    printf("%d ",a);
}