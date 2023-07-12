// 9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int a[size],b[size],c[2*size],i,j,k;

    printf("Enter %d Elements of First Array in Descending Order: \n",size);
    for(i=0;i<size;i++)
     {
        scanf("%d",&a[i]);
     }
    printf("Enter %d Elements of Second Array in Descending Order: \n",size);
     for(i=0;i<size;i++)
     {
        scanf("%d",&b[i]);
     }
     printf("Merger of Two Arrays in Descending Order is : ");

     i=0;
     j=0;
    while(i<size && j<size)
    {   
        if(a[i]>=b[j])
          {
           printf("%d ",a[i]);
           i++;
          }
        
        else
         {
            printf("%d ",b[j]);
            j++;
         }
    }
    if(i<size)
     {
        for(k=i;k<size;k++)
         {
            printf("%d ",a[k]);
         }
     }
     if(j<size)
     {
        for(k=j;k<size;k++)
         {
            printf("%d ",b[k]);
         }
     }
    return 0;
}

