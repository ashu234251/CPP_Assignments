//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,t;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    if(n==1)
    {
     printf("1st term of Fibonacci Series is %d",t1);
    }
    if(n==2)
    {
     printf("2nd term of Fibonacci Series is %d",t2);
    }
    if(n>2)
    {
    for(i=1;i<=n-2;i++)
      {
         t=t1+t2;
         t1=t2;
         t2=t;
      }
    printf("%d term of Fibonacci Series is %d",n,t);
    }
    return 0;
}