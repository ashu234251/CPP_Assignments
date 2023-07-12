//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter values of a,b and c of quadratic equation ax^2+bx+c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d>0)
    printf("Roots are real & distinct");
    if(d==0)
    printf("Roots are real & equal");
    if(d<0)
    printf("Roots are imaginary roots");
    return 0;
}