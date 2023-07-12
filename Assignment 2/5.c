//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int a,sum;
    printf("Enter a three digit Number\n");
    scanf("%d",&a);
    sum=a%10;
    a=a/10;
    sum=sum+a%10;
    a=a/10;
    sum=sum+a%10;
    printf("Sum of digits is %d",sum);
    return 0;
}