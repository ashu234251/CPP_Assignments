//  5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sum_digits(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Sum of Digits of %d is %d",n,sum_digits(n));

    return 0;
}
int sum_digits(int n)
{
    int sum=0;

    if(n!=0) 
        sum=n%10+sum_digits(n/10);

    return sum;
}