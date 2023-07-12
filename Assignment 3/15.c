//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
  int x;
  printf("Enter a Number\n");
  scanf("%d",&x);
  if(x>0)
   {
    printf("%d is Positive",x);
   }
  else if (x<0)
  {
    printf("%d is Negative",x);
  }
  else
  {
    printf("%d is zero",x);
  }

return 0;
}