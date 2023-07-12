// 6. Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>

void reverse(int [],int );

int main()
{
  int n;
  printf("Enter Value of N: ");
  scanf("%d",&n);
  printf("Enter %d Values: \n");
  int a[n];

  reverse(a,n);

  return 0;
}

void reverse(int b[],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

printf("Values in Reverse Order are: ");
  for(i=0;i<n;i++)
    {
        printf("%d ",b[n-1-i]);
    }
}