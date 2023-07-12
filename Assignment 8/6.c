/*
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=9;j++)
       {
         if(j>=i && j<=10-i)
           printf("*");
         else
           printf(" ");
       }
       printf("\n");
    }
  return 0;
}
*/
#include<stdio.h>
int main()
{
  int i,j;
  for(i=0;i<5;i++)
  {
    for(j=0;j<i;j++)
      printf(" ");
    for(j=0;j<(2*(5-i)-1);j++)
      printf("*");
    printf("\n");
  }
  return 0;
}