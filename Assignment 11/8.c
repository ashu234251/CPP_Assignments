// 8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

void pascal(int);
int comb(int,int);
int fact(int);

int main()
{
    int n;
    printf("Enter Value of N:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}

void pascal(int n)
{

    int i,j;
    for(i=0;i<=n-1;i++)
      {
        for(j=0;j<=(n-1)-i;j++)
          printf(" ");
        for(j=0;j<=i;j++)
          printf("%d ",comb(i,j));

        printf("\n");
      }
}

int comb(int n,int r)
{

  return fact(n)/(fact(r)*fact(n-r));
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      {
        f=f*i;
      }

      return f;
}