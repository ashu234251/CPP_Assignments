//6. Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i,x=2;
    for(i=1;i<=10;i++)
    {
        printf("%d ",x);
        x=x+2;
    }
   
    return 0;
}