// 8. Write a function in C to print all unique elements in an array.


#include<stdio.h>

int total_duplicate(int [],int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n],d;

    total_duplicate(a,n);


    return 0;
}

int total_duplicate(int b[],int n)
{
    int i,j,min,count=0;
    for(i=0;i<n;i++)
     {
        scanf("%d",&b[i]);
     }
      
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          if(i!=j && b[i]==b[j])
            break;
        }
        if(j==n)
          printf("%d ",b[i]);
    }
     
}