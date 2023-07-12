
/*
#include<stdio.h>
int main()
{
    int i,j,count;
    
    for(i=1;i<=4;i++)
      {
         count=0;
         for(j=1;j<=5-i;j++)
           {
             printf("%d",++count);  
           }
          for(j=1;j<(2*i-2);j++)
            {
             printf(" ");
            }
          
          if(i==1)
           {
            --count;
            while (count)
              {
                printf("%d",count--);
              }
           }

          while(count)
            printf("%d",count--);

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
      for(j=0;j<4-i;j++)
       printf("*");
      for(j=0;j<i;j++)
       printf(" ");
      for(j=0;j<i-1;j++)
       printf(" ");
      if(i!=0)
      {
       for(j=0;j<4-i;j++)
        printf("*");
      }
      else  
      {
       for(j=0;j<3-i;j++)
        printf("*");
      }
      printf("\n");
    }
    return 0;
}