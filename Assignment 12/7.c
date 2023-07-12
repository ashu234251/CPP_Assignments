// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void square(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    square(n);
}

void square(int n)
{
    if(n>0)
    {
      square(n-1);
      printf("%d ",n*n);
    }
}