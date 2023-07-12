//  9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int count_digits(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Number of digits in %d are %d",n,count_digits(n));
    return 0;
}

int count_digits(int n)
{
    int count=0;
    if(n>=1)
      count=1+count_digits(n/10);

    return count;
}