// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,t;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    if(n==1)
    {
     printf("first 1 term of Fibonacci Series is %d",t1);
    }
    if(n==2)
    {
     printf("first 2 terms of Fibonacci Series are %d  %d",t1,t2);
    }
    if(n>2)
    {
       printf("first %d terms of Fibonacci Series are %d  %d  ",n,t1,t2);   
    for(i=1;i<=n-2;i++)
      {
         t=t1+t2;
         t1=t2;
         t2=t;
         printf("%d  ",t);
      }
    
    }
    return 0;
}