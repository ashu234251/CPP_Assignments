//8. Write a function to count words in a given string

#include<stdio.h>
#include<string.h>

int count(char[]);
int main()
{
    char str[100];
    printf("Enter a String: ");
    fgets(str,100,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';
    
    printf("Total Number of Words in %s is %d",str,count(str));
    return 0;
}

int count(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
     {
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
          count++;
     }

    return count+1;
}

