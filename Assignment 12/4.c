// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void reverse_odd(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    reverse_odd(n);
}

void reverse_odd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        reverse_odd(n-1);
    }
}