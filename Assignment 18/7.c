// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>

void palindrome(char str[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';

    palindrome(str);
    return 0;
}

void palindrome(char str[])
{
    int i;
    char rev[50]="";
    for(i=0;str[i];i++)
    {
        rev[strlen(str)-1-i]=str[i];
    }

    printf("%s\n",rev);
    printf("%d\n",strcmp(str,rev));
    if(strcmp(str,rev)==0)
      printf("String is an Palindrome");
    else
      printf("String is not a Palindrome");
}