/* 
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,a,b,c;


 while(1)
 {
  printf("\n********************************************************************************************************");
  printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
  printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
  printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
  printf("\n4. Exit");

  printf("\nEnter your Choice: ");
  scanf("%d",&n);

  switch (n)
  {
  case 1: 
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || b==c || c==a)
      printf("It form an isocles triangle.\n");    
    else
      printf("It doesn't form an isocles triangle.\n");
    break;

  case 2: 
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
      printf("It form an right-angled triangle.\n");    
    else
      printf("It doesn't form an right-angled triangle.\n");   
    break;

  case 3: 
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
      printf("It form an equilateral triangle.\n");    
    else
      printf("It doesn't form an equilateral triangle.\n");   
    break;
  
  default:
    printf("Invalid Option opted \n");
    break;
  case 4:
    return 0;
    
  }
 }
return 0;
}