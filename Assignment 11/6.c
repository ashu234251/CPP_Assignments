// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void prime(int,int);

int main()
{
  int a,b;
  printf("Enter two Numbers:\n");
  scanf("%d%d",&a,&b);
  prime(a,b);
  return 0;
}

void prime(int a,int b)
{
   int i,j;
   for(i=a+1;i<b;i++)
    {
      for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
           break;
        }
        if(j>i/2)
          {
            printf("%d ",i);
          }
    }
}