// 8. Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main()
{
  int size;
  printf("Enter Size of Square Matrix: ");
  scanf("%d",&size);

  int i,j,a[size][size];
  
  printf("Enter %d Elements of the Square Matrix: \n",size*size);
   for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
       {
         scanf("%d",&a[i][j]);

         if(i>j)
          a[i][j]=0;
       } 
    }

    printf("Upper Triangular Matrix is: \n");

    for(i=0;i<size;i++)
      {
        for(j=0;j<size;j++)
          {
            printf("%d  ",a[i][j]);
          }
           printf("\n");
      }
     
  return 0;

}