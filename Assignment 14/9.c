// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    
    printf("Enter %d numbers: \n",n);

    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Numbers in Reverse Order are: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[n-1-i]);
    }

    return 0;
}