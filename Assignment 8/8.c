/*
#include<stdio.h>
int main()
{
  int i,j,count;
  
  for(i=1;i<=4;i++)
   {
    count=0;

    for(j=1;j<=4-i;j++)
      {
        printf(" ");
      }
    for(j=1;j<=i;j++)
      {
        printf("%d",++count);
      }
    while(count != 1)
      {
        printf("%d",--count);
      }
     
     printf("\n");
   }

  return 0;
}
*/

#include<stdio.h>
int main()
{
  int i,j,count;
  
  for(i=0;i<4;i++)
  {
    count=1;
    for(j=0;j<3-i;j++)
      printf(" ");
    for(j=0;j<=i;j++)
    {
      printf("%d",count);
      count++;
    }
    count=i;
    for(j=0;j<i;j++)
    {
      printf("%d",count);
      count--;
    }
    printf("\n");
  }

  return 0;
}