// 3. Write a function to check whether a given number is Prime or not. (TSRS) 

#include<stdio.h>

int prime(int);

int main()
{
    int n,x;
    printf("Enter a Number:");
    scanf("%d",&n);
    x=prime(n);
    if(x==1)
      printf("%d is a prime number.",n);
    else
      printf("%d is not a prime number.",n);
return 0;
}

int prime(int N)
{
    int i;
    for(i=2;i<=N/2;i++)
     {
        if(N%i==0)
          return 0;
     }

    return 1;
}