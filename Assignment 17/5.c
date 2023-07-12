// 5. Write a program to convert a given string into lowercase

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str,50,stdin);
    printf("String in Lowercase is: %s",strlwr(str));
    return 0;

}