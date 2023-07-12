// 7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int total_duplicate(int [],int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n],d;

    d=total_duplicate(a,n);

    if(d !=0 )
       printf("Total Number of Duplicate Elements are %d.",d);
    else
       printf("No Duplicate Element.");

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
       min=b[i];
      for(j=i;j<n;j++)
       {
         if(b[j]<min)
         {
           min=b[j];
           b[j]=b[i];
           b[i]=min;
         }
       }
    }


    for(i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
          count++;
    }

    return count;
     
}