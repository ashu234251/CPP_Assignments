/*
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/

#include<stdio.h>
int main()
{
    double R,D;
    printf("Enter Amount in INR\n");
    scanf("%lf",&R);
    D=R/76.23;
    printf("Amount in USD is %lf",D);
    return 0;
}