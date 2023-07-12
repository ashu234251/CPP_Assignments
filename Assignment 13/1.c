//  1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>

int natural(int);

int main()
{
    int n,sum;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    sum=natural(n);
    printf("Sum of first %d Natural Numbers is %d",n,sum);

    return 0;
}

int natural(int n)
{
    int sum=0;
    if(n>0)
    {
      sum=n+natural(n-1);
    }
    
    return sum;
}