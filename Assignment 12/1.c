// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>

void natural(int);

int main()
{
    int n;
    printf("Enter Value of N:");
    scanf("%d",&n);
    natural(n);
}

void natural(int n)
{
  if(n>0)
   {
    natural(n-1);
    printf("%d ",n);
   }

}