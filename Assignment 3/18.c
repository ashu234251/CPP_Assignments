/*
18. Write a program which takes the month number as an input and display number of
days in that month
*/

#include<stdio.h>
int main()
{
  int x;
  printf("Enter the Month Number\n");
  scanf("%d",&x);
  if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
  {
    printf("This Month has 31 days.");
  }
  else if (x==4 || x==6 || x==9 || x==11)
  {
    printf("This Month has 30 days.");
  }
  else if (x==2)
  {
    printf("This Month has 28 or 29 days.");
  }
  else
  {
    printf("This Month Number is not Valid.");
  }
  return 0;
  
}