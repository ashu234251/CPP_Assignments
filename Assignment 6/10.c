// 10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a Number: ");
    scanf("%d",&x);
    while (x)
    {
        z=10*z;
        y=x%10;
        x=x/10;
        z=z+y;
    }
    printf("Reverse of the given Number is %d",z );
    return 0;
    
}