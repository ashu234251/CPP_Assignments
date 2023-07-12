#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=1;i<=7;i++)
      {
        count=64;
        for(j=1;j<=8-i;j++)
         {
           printf("%c",++count);
         }
        for(j=1;j<2*i-2;j++)
         {
           printf(" ");
         }

         if(i==1)
          {
            count--;
            while(count>64)
              printf("%c",count--);
          }
          while(count>64)
           {
            printf("%c",count--);
           }
          
        printf("\n");
      }
}