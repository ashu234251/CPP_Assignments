// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>
int main()
{
  int r,c,count=0;
  printf("Enter Number of Rows & Columns: \n");
  scanf("%d%d",&r,&c);

  int i,j,a[r][c];
  
  printf("Enter %d Elements of the Matrix: \n",r*c);
   for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
       {
         scanf("%d",&a[i][j]);

         if(a[i][j]==0)
           count++;
       } 
    }

  if(count>((r*c)/2))
    printf("Matrix is a Sparse Matrix");
  else
    printf("Matrix is not a Sparse Matrix");

    return 0;
    
}