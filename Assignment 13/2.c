// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>

int sum_odd(int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    printf("Sum of first %d Odd Natural Numbers is: %d",n,sum_odd(2*n-1));

    return 0;
}

int sum_odd(int n)
{
    int sum=0;
    if(n>0)
     {
        sum=n+sum_odd(n-2);
     }
     return sum;
}