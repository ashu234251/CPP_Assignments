//  10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

#include<stdio.h>

int series(int);
int fact(int);

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Sum of the series is %d",series(n));
    return 0;
}

int series(int N)
{
    int i,sum=0;
    for(i=1;i<=N;i++)
      {
        sum= sum + (fact(i)/i) ;
      }
      return sum;
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      {
        f=f*i;
      }
      return f;
}