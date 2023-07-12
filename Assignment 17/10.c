// 10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
int main()
{
    char str[50],a[256]={};
    int i,count=0;
    printf("Enter a String: ");
    gets(str);
    for(i=0;str[i];i++)
    {
       a[str[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(a[i]!='\0')
          printf("Frequency of %c is %d.\n",i,a[i]);
    }
    return 0;

}