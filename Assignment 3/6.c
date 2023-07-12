//6. Write a program to print greater between two numbers. Print one number of both are the same. 

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two Numbers\n");
    scanf("%d%d",&x,&y);
    x>=y? printf("%d",x) : printf("%d",y);
    return 0;
}