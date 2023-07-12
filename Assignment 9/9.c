// 9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    switch (n%2 == 0)
    {
     case 1:
          printf("Upper Nearest Odd Number is: %d",n+1);
          break;
    
     case 0:
          printf("%d is not an even number.",n);
          break;
    }

}