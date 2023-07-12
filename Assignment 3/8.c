//8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year\n");
    scanf("%d",&a);
    
    if((a%4==0 && a%100 != 0) || (a%400==0))
    printf("%d is a leap year",a);
    else
    printf("%d is not a leap year",a);
    return 0;
}