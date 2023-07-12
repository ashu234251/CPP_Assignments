//  8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

long combination(int,int);
long fact(int);

int main()
{  
  int n,r;
  long c;
  printf("Enter Values of N and R:\n");
  scanf("%d%d",&n,&r);
  c=combination(n,n-r);  
  printf("Number of Combinations are %ld",c);
  return 0;
}

long combination(int N,int S)
{
   return fact(N)/fact(S) ;
     
}

long fact(int n)
{
  int i;
  long f=1;
  for(i=1;i<=n;i++)
    {
      f=f*i;
    }

    return f;
}