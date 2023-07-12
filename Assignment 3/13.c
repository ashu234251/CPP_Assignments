//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
  int x;
  printf("Enter a Number\n");
  scanf("%d",&x);
  if(x%3==0 && x%2==0)
   {
    printf("%d is divisible by 3 and 2",x);
   }
  else
    printf("%d is not divisible by both 3 and 2");

return 0;
}