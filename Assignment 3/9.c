/*
     9. Write a program to find the greatest among three given numbers.
        Print number once if the greatest number appears two or three times.
*/

#include<stdio.h>
int main()
{
  int a,b,c;
  printf(" Enter Three Numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
   {
    if(a>c)
    printf("Greatest Number is %d",a);
    else
    printf("Greatest Number is %d",c);
   }
  else
   {
     if(b>c)
      printf("Greatest Number is %d",b);
     else  
      printf("Greatest Number is %d",c);
   }
}

