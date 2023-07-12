 // 4. Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Order of Matrix: ");
    scanf("%d",&n);

    int a[n][n],b[n][n],i,j,sum=0;

    printf("Enter Values of Matrix : \n");
    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
          {
            scanf("%d",&a[i][j]);
          }
     }

     j=0;
     for(i=0;i<n;i++)
     {
       sum=sum+a[i][j];
       j++;
     }
    
    printf("Sum of Right Diagonal of Matrix is %d. ",sum);

    return 0;
}
