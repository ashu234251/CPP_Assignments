//6. Write a program to print the first N even natural numbers


#include<stdio.h>
int main()
{
    int n,i,x=2;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",x);
        x=x+2;
    }
    return 0;
}