// 5. Write a recursive function to print first N even natural numbers

#include<stdio.h>

void even(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    even(n);
}

void even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d ",2*n);
    }
}