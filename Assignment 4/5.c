//5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,x=19;
    for(i=1;i<=10;i++)
    {
        printf("%d ",x);
        x=x-2;
    }

    return 0;
}