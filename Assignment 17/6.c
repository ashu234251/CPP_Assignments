// 6. Write a program to reverse a string.

#include<stdio.h>
int main()
{
    char str[50],rev[50]="";
    int i,length;

    printf("Enter a String: ");
    fgets(str,50,stdin);

    for(i=0;str[i];i++)
     {}

    if(str[i-1]='\n')
       length= i-1;
    else 
       length= i;

    for(i=0;str[i];i++)
     {
        rev[length-1-i]=str[i];
     }

     printf("Reverse String is:%s ",rev);
     return 0;

}