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
int main()
{
  int n;
  float a,b;


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
    printf("Enter two Numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Sum is %0.2f \n",a+b);    
    break;

  case 2:
    printf("Enter two Numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Subtraction is %0.2f \n",a-b);    
    break;
  
  case 3:
    printf("Enter two Numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Multiplication is %0.2f \n",a*b);    
    break;
  
  case 4:
    printf("Enter two Numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Division is %0.2f \n",a/b);    
    break;
  
  default:
    printf("Invalid Option opted \n");
    break;

  case 5:
    return;
    
  }
 }
return 0;
}