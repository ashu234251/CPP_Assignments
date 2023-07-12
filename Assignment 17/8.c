// 8. Write a program in C to copy one string to another string.

#include<stdio.h>
int main()
{
    char str[50],copy[50];
    int i,length;

    printf("Enter a String: ");
    fgets(str,50,stdin);

    for(i=0;str[i];i++)
     {}

    if(str[i-1]='\n')
       length= i-1;
    else 
       length= i;

    for(i=0;i<length;i++)
     {
        copy[i]=str[i];
     }

     printf("Copied String is: %s ",copy);
     return 0;

}