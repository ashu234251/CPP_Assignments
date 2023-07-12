/*
17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.
*/
#include<stdio.h>
int main()
{
  float a,b,c;
  printf("Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
  if((a+b)>c && (a+c)>b && (b+c)>a)
  {
     printf("Triangle is Valid");
  }
  else 
  {
    printf("Triangle is not Valid");
  }
return 0;
}