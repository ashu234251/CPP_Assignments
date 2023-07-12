// 2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>

void reverse(char[]);
int main()
{
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    if(str[strlen(str)-1]='\n')
         str[strlen(str)-1]='\0';

    reverse(str);
    return 0;
}

void reverse(char str[])
{
    int i;
    printf("Reverse string is %s",strrev(str));
}