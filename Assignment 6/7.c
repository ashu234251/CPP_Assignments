// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int d=0;
    double x;
    printf("Enter a Number : ");
    scanf("%lf",&x);
    while(x>=1 || x<=-1)
    {
        x=x/10;
        d++;
    }
    printf("Number of Digits are %d",d);
    return 0;

}