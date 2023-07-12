//5. Write a program to print the first N odd natural numbers in reverse order.


#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    x=2*n-1;
    for(i=1;i<=n;i++)
    {
        printf("%d  ",x);
        x=x-2;
    }
    
    return 0;
}