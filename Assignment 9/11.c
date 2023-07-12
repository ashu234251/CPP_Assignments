/*
2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>

float a,b;

void entry();

void entry()
 {
    float c,d;
    printf("Enter two Numbers:\n");
    scanf("%f%f",&c,&d);
    a=c;
    b=d;
 }


int main()
{
  int n;

 while(1)
 {
  printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\n3. Multiplication");
  printf("\n4. Division");
  printf("\n5. Exit");

  printf("\nEnter your Choice: ");
  scanf("%d",&n);

  switch (n)
  {
  case 1: 
    entry();
    printf("Sum is %0.2f \n",a+b);    
    break;

  case 2:
    entry();
    printf("Subtraction is %0.2f \n",a-b);    
    break;
  
  case 3:
    entry();
    printf("Multiplication is %0.2f \n",a*b);    
    break;
  
  case 4:
    entry();
    printf("Division is %0.2f \n",a/b);    
    break;
  
  default:
    printf("Invalid Option opted \n");
    break;

  case 5:
    return 0;
    
  }
 }
return 0;
}