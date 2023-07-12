// 2. Write a function to find the smallest number from the given array of any size. (TSRS)


#include<stdio.h>

int smallest_array(int[],int);

int main()
{
  int n;
  printf("Enter Value of N: ");
  scanf("%d",&n);
  int a[n];
  printf("Smallest Value is %d.",smallest_array(a,n));

  return 0;
}

int smallest_array(int b[],int n)
{
  int i,min;

  for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
  for(i=0;i<n;i++)
    {
      if(b[i]<min)
        min=b[i];
    } 

    return min;
}