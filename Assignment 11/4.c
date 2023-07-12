// 4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int prime(int);

int main()
{
   int n;
   printf("Enter a Number:");
   scanf("%d",&n);
   printf("Next Prime Number of %d is %d",n,prime(n));
   return 0;
}

int prime(int N)
 {
    int i,j;
    for(i=N+1;i;i++)
    {
      for(j=2;j<=i/2;j++)
       {
         if(i%j==0)
           break;
       }
       if(j>i/2)
         return i;
    }
 }