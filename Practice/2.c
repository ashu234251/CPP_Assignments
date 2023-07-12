#include<stdio.h>
int main()
{
    int N,c=0;
    scanf("%d",&N);
    int i,j,a[100][100];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
         {
            scanf("%d",&a[i][j]);
         }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
         {
            if((i==j)||(i+j==N-1))
              {
                if(a[i][j]!=0)
                  c++;
                else
                 {
                  printf("False");
                  return 0;
                 }
              }
            else
              {
                if(a[i][j]==0)
                  c++;
                else
                 {
                    printf("False");
                    return 0;
                 }
              }
         }
    }
    printf("True");
    return 0;
}
