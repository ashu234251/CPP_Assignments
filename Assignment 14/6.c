// 6. Write a program to sort elements of an array of size 10. Take array values from the user. (Insertion Sort, Bubble Sort, Double Sort.)
//This is through Brute-Force Algorithm.

#include<stdio.h>
int main()
{
    int a[10],i,j,min;

    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

   

    for(i=0;i<9;i++)
    {
       for(j=i+1;j<=9;j++)
        {
          if(a[j]<a[i])
          {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j]; 
          }
        }
         
    }

    printf("Sorted Values are: ");

    for(i=0;i<=9;i++)
      {
        printf("%d ",a[i]);
      }

    return 0;
}

