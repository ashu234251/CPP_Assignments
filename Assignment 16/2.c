// 2. Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3]={},i,j,k;

    printf("Enter Values of First Matrix : \n");
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
          {
            scanf("%d",&a[i][j]);
          }

     }
    printf("Enter Values of Secoond Matrix : \n");
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
          {
            scanf("%d",&b[i][j]);
          }
          
     }

     for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
          {
             for(k=0;k<3;k++)
               {
                  c[i][j]=c[i][j]+ (a[i][k]*b[k][j]);
               }
          }
      }
  
     printf("Product Matrix is : \n");
      for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
            {
              printf("%d  ",c[i][j]);
            }
            printf("\n");
        }

      return 0;
}