// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>

int greatest_array(int[],int);

int main()
{
  int n;
  printf("Enter Value of N: ");
  scanf("%d",&n);
  int a[n];
  printf("Greatest Value is %d.",greatest_array(a,n));

  return 0;
}

int greatest_array(int b[],int n)
{
  int i,max;

  for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
  for(i=0;i<n;i++)
    {
      if(b[i]>max)
        max=b[i];
    } 

    return max;
}