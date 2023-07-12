// 10. Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>
int main()
{
  int r,c,count,max=0,index;
  printf("Enter Number of Rows & Columns: \n");
  scanf("%d%d",&r,&c);

  int i,j,a[r][c];
  
  printf("Enter %d Elements of the Matrix: \n",r*c);
   for(i=0;i<r;i++)
    {
        count=0;
      for(j=0;j<c;j++)
       {
         scanf("%d",&a[i][j]);
         if(a[i][j]==1)
           count++;
       } 
        if(count>max)
         {
          max=count;
          index=i;
         }
    }

    printf("Row with Maximum Number of 1s is Row-%d",index+1);

    return 0;
}