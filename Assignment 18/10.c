// 10. Write a function to find the repeated character in a given string.
#include<stdio.h>

void repeated(char[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str,50,stdin);

    repeated(str);
    return 0;

}
void repeated(char str[])
{
    char a[256]={};
    int i,count=0;
   
    for(i=0;str[i];i++)
    {
       a[str[i]]++;
    }
    
    printf("Repeated Characters are: ");
    for(i=0;i<256;i++)
    {
        if(a[i]!='\0' && i!='\n' && a[i]!=1 && i!=' '  )
          printf("%c  ",i);
          
    }

}