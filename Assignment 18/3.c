// 3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

int compare(char[],char[]);
int main()
{
    char a[20],b[20];
    int r;
    printf("Enter two String: ");
    fgets(a,20,stdin);
    fgets(b,20,stdin);
    r=compare(a,b);
    if(r==0)
      printf("Equal Strings");
    else if(r==1)
      printf("Strings are in Anti-Dictionary Order.");
    else
      printf("Strings are in Dictionary Order.");
}

int  compare(char a[],char b[])
{
    int r;
    r=strcmp(a,b);
    return r;
}