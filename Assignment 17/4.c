// 4. Write a program to convert a given string into uppercase

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str,50,stdin);
    printf("String in Uppercase is: %s",strupr(str));
    return 0;

}