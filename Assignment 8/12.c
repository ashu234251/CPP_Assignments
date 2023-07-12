#include<stdio.h>
int main()
{
    int i,j,count;

    for(i=5;i>=1;i--)
    {
      count=64;
      for(j=1;j<=5-i;j++)
        {
          printf(" ");
        }
      for(j=1;j<=i;j++)
        {
          printf("%c",++count);
        }

      count--;
      while(count>64)
      {
        printf("%c",count--);
      }

      printf("\n");
    }
   
     
}