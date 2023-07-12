#include<stdio.h>
int main()
{
    int i,j;
    for(i=3;i>=1;i--)
      {
        for(j=1;j<=19;j++)
          {
            if((j>=i && j<=10-i) || (j>=10+i && j<=20-i))
              printf("*");
            else
              printf(" ");
          }
        printf("\n");
      }




      for(i=1;i<=10;i++)
      {
        for(j=1;j<=19;j++)
          {
            if(i==1 && j==7)
            {
                printf("MySirG");
                j=12;
                continue;
            }
            if(j>=i && j<=20-i)
              printf("*");
            else
              printf(" ");
          }
        printf("\n");
      }
}