// 10. Write a function in C to count the frequency of each element of an array.

/*
#include<stdio.h>

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int a[size],i,j,min,count=1;

    printf("Enter %d Elements of Array: \n",size);
    for(i=0;i<size;i++)
     {
        scanf("%d",&a[i]);
     }
    
    for(i=0;i<size-1;i++)
     {
       min=a[i];
      for(j=i+1;j<size;j++)
       {
         if(a[j]<min)
         {
           min=a[j];
           a[j]=a[i];
           a[i]=min;
         }
       }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==a[i+1])
         {
            count++;
         }
        else
         {
            printf("Frequency of %d is %d.\n",a[i],count);
            count=1;
         }
    }
    return 0;
}

*/
// Hash Map OR Hashing Technique.

#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int a[size],i,j,min,count=1;

    printf("Enter %d Elements of Array: \n",size);
    for(i=0;i<size;i++)
     {
        scanf("%d",&a[i]);
     }

     int b[1000]={ };
     for(i=0;i<size;i++)
     {
        b[(a[i])]++;
     }
     for(i=0;i<1000;i++)
     {
        if(b[i] != 0)
         {
            printf("Frequency of %d is %d. \n",i,b[i]);
         }
     }

     return 0;
}
