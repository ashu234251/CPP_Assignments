// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>

void reverse_even(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    reverse_even(n);
}

void reverse_even(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        reverse_even(n-1);
    }
}