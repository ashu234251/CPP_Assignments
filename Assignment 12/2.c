//  2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void reverse_natural(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    reverse_natural(n);
}

void reverse_natural(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        reverse_natural(n-1);
    }
}