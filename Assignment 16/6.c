// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter Numbers of Row and Column: \n");
    scanf("%d%d",&r,&c);

    int a[r][c],i,j;
    int sum_r[r];
    int sum_c[c];
    printf("Enter Values of Matrix : \n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
          {
            scanf("%d",&a[i][j]);
          }

     }
    for(i=0;i<r;i++)
     {
        sum_r[i]=0;
        for(j=0;j<c;j++)
          {
            sum_r[i]=sum_r[i]+a[i][j];
          }
        printf("Sum of %d Row is %d. \n",i+1,sum_r[i]);
     }


     j=0;
    while(j<c)
    {
       sum_c[j]=0;
       for(i=0;i<r;i++)
          {
            sum_c[j]=sum_c[j]+a[i][j];
          }
        printf("Sum of %d Column is %d. \n",j+1,sum_c[j]);
        j++;
      }

     return 0;
}

