// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>

 void octal(int);

 int main()
 {
    int n;
    printf("Enter a Decimal Number: ");
    scanf("%d",&n);
    printf("Octal Number of %d is: ",n);
    octal(n);
 }

 void octal(int N)
 {
   if(N>0)
   { 
     octal(N/8);
     printf("%d",N%8);
   }
 }