// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int lcm(int,int);

int main()
{
  int x,y;
  printf("Enter Two Numbers: \n");
  scanf("%d%d",&x,&y);
  printf("L.C.M is %d",lcm(x,y));
  return 0;
}

int lcm(int X,int Y)
 {
    int a,b,i;
    a=(X>=Y)? X:Y;
    b=(X<Y)? X:Y;
    for(i=1;i<=b;i++)
      {
        if((a*i)%b==0)
          return a*i;
      }
 }