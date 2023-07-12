// 1. Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>
int main()
{
    char str[50];
    int i,length;

    printf("Enter a String: ");
    fgets(str,50,stdin);

    for(i=0;str[i];i++)
     {}

    if(str[i-1]='\n')
       printf("Length of the String is %d.",i-1);
    else 
       printf("Length of the String is %d.",i);

    return 0;
}