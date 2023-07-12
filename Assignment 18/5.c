// 5. Write a function to transform a string into lowercase

#include<stdio.h>
#include<string.h>

void lowercase(char[]);
int main()
{
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    if(str[strlen(str)-1]=='\n')
       str[strlen(str)-1]=='\0';
    
    lowercase(str);
    return 0;
}

void lowercase(char str[])
{
    printf("String in lowercase is: %s",strlwr(str));
}