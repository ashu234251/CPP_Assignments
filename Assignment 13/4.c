// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>

int sum_square(int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    printf("Sum of Squares of First %d Natural Numbers is %d.",n,sum_square(n));
    return 0;
}

int sum_square(int n)
{
    int sum=0;

    if(n>0)
        sum=n*n + sum_square(n-1);

    return sum;
}