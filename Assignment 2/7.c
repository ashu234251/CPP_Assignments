//7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
  int x,count=1;
  printf("Enter a Number\n");
  scanf("%d",&x);
  if(x==0)
    {
        printf("Number is Invalid");
    }
  else
    {
        while(x!=0)
          if((x&1)==1)
           {
             printf("Position is %d",count);
             break;
           }
          else
           {
             count++;
             x=x>>1;
           }
    }
  return 0;

}  