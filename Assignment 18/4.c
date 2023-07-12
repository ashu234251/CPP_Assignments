// 4. Write a function to transform string into uppercase

#include<stdio.h>
#include<string.h>

void uppercase(char[]);
int main()
{
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    if(str[strlen(str)-1]=='\n')
       str[strlen(str)-1]=='\0';
    
    uppercase(str);
    return 0;
}

void uppercase(char str[])
{
    printf("String in Upppercase is: %s",strupr(str));
}