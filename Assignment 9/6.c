// 6. Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Year: ");
    scanf("%d",&n);

    switch ((n%4==0 && n%100 !=0) || (n%100==0 && n%400==0))
    {

    case 0:
        printf("%d is not a leap year.",n);
        break;
    
    case 1:
        printf("%d is a leap year.",n);
        break;
    
    }

    return 0;
}