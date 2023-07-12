// 2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
int main()
{
    char c,str[50];
    int i,count=0;

    printf("Enter a String: ");
    fgets(str,50,stdin);

    printf("Enter the Character to be counted: ");
    fflush(stdin);
    scanf("%c",&c);

    for(i=0;str[i];i++)
     {
        if(str[i]==c)
          count++;
     }

    printf("Occurence of %c is %d. ",c,count);
    return 0;
}