// 3. Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>

int sum_even(int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    printf("Sum of First %d Even Numbers is %d.",n,sum_even(2*n));

    return 0;
}

int sum_even(int n)
{
    int sum=0;
    if(n>0)
        sum=n+sum_even(n-2);

    return sum;
}