// 7. Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void fibonacci(int);

int main()
{
    int n;
    printf("Enter Value of N:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int i,t1=0,t2=1,t;
    if(n==1)
      printf("First %d term of Fibonacci Series is: 1",n);
    if(n>1)
      {
        printf("First %d terms of Fibonacci Series are: 1 ",n);
        for(i=1;i<n;i++)
          {
            t=t1+t2;
            printf("%d ",t);
            t1=t2;
            t2=t;
          }
      }
}