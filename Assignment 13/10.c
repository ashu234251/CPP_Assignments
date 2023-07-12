// 10. Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

int power(int,int);

int main()
{
    int n,p;
    printf("Enter a Number and its Power: \n");
    scanf("%d%d",&n,&p);
    printf("%d power of %d is %d",p,n,power(n,p) );

    return 0;
}

int power(int n,int p)
{
    int value=1;
    if(p==0)
      return 1;
    else
      return n*power(n,p-1);
      
}