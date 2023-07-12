//  3. Write a function to sort an array of any size. (TSRN)

#include<stdio.h>

int sort(int [],int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    int a[n];

    sort(a,n);

    return 0;
}

int sort(int b[],int n)
{
   int i,j,min;
   printf("Enter %d Values: \n");
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
     printf("Sorted Values are: ");
     for(i=0;i<n;i++)
       {
         printf("%d ",b[i]);
       }

    return b;
}