//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    if((x<1000 && x>99)||(x>-1000 && x<-99))
    printf("Number is a three-digit Number");
    else
    printf("Number is not a three-digit Number");
    return 0;
}
