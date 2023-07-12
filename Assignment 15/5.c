// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

#include<stdio.h>

int first_duplicate(int [],int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n],d;

    d=first_duplicate(a,n);

    if(d !=0 )
       printf("First Adjacent Duplicate Value is %d.",d);
    else
       printf("No Adjacent Duplicate Value.");

    return 0;
}

int first_duplicate(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
     {
        scanf("%d",&b[i]);
     }
      
    for(i=1;i<n;i++)
     {
        if(b[i]==b[i-1])
          return b[i];
     }
    
    if(i==n)
      return 0;
     
}