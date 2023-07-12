//9. Write a program to print cubes of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i,x=1;
    for(i=1;i<=10;i++)
    {
        printf("%d ",x*x*x);
        x++;
    }

    return 0;
}