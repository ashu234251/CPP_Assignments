// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,alpha=0,digits=0,special=0;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
     {
        if((str[i]>64 && str[i]<91) || (str[i]>96 && str[i]<123))
           alpha++;
        else if(str[i]>47 && str[i]<58)
           digits++;
        else
           special++;
     }

     printf("Number of Alphabets in %s are: %d.\n",str,alpha);
     printf("Number of Digits in %s are: %d.\n",str,digits);
     printf("Number of Special Characters in %s are: %d.\n",str,special);

     return 0;
}