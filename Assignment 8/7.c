/*
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
       for(j=1;j<=5;j++)
         {
            if(j<=6-i)
              printf("*");
            else
              printf(" ");
         }
        for(j=1;j<=5;j++)
         {
            if(j>=i)
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
    for(j=0;j<(5-i);j++)
      printf("*");
    for(j=0;j<i;j++)
      printf(" ");
    for(j=0;j<i;j++)
      printf(" ");
    for(j=0;j<(5-i);j++)
      printf("*");
    printf("\n");
  }
  return 0;
}