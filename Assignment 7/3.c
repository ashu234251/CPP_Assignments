//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int i=4,n,t1=1,t2=1,t=2;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n==0)
     printf("0 is 1st term of Fibonacci Series.");
    if(n==1)
     printf("1 is 2nd/3rd term of Fibonacci Series.");
    if(n<0)
     printf("%d is not a term in Fibonacci Series",n);
     
    while (n>=t)
        {
         t=t1+t2;
         t1=t2;
         t2=t;
         if(n==t)
         { printf("%d is %d term of Fibonacci Series.",n,i);
           break;
         }
         i++;
        }
    if(n>1 && n<t)
     printf("%d is not a term in Fibonacci Series.",n);
           
    return 0;
}