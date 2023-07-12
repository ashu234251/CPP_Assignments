//  7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

long combination(int,int);

int main()
{  
  int n,r;
  long c;
  printf("Enter Values of N and R:\n");
  scanf("%d%d",&n,&r);
  c=combination(n,r);  
  printf("Number of Combinations are %ld",c);
  return 0;
}

long fact(int n)
{
  int i,f=1;
  for(i=n;i>=1;i--)
   {
    f=f*i;
   }
   return f;
}

long combination(int N,int R)
{
    
    return fact(N)/(fact(R) * fact(N-R));
     
}