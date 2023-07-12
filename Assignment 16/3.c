// 3. Write a program in C to find the transpose of a given matrix.

#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter Value of Row and Column: \n");
    scanf("%d%d",&r,&c);

    int a[r][c],b[c][r],i,j;

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
        for(j=0;j<c;j++)
          {
            b[j][i]=a[i][j];
          }
     }
    printf("Transpose Matrix is : \n");

    for(i=0;i<c;i++)
     {
        for(j=0;j<r;j++)
          {
            printf("%d  ",b[i][j]);
          }
          printf("\n");
     }
      return 0;
}