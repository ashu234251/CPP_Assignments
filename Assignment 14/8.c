// 8. Write a program to find the second smallest number in an array.Take array value from the user.

#include<stdio.h>
int main()
{
    int n,i,j,min;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Numbers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=1;i++)
    {
       min=a[i];
       for(j=i;j<n;j++)
        {
          if(a[j]<min)
             {
               min=a[j];
               a[j]=a[i];
               a[i]=min;
             }
        }
    }
    printf("Second Largest Value is %d.",a[1]);

    return 0;
}