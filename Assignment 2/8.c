//8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    ((x&1)==0)? printf("Number is Even") : printf("Number is Odd");
    return 0;
}