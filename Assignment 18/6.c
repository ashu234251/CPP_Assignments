/* 6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
*/

#include<stdio.h>

void check(char []);
int main()
{
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    check(str);
    return 0;
}

void check(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>47 && str[i]<58)
         {
            count++;
            break;
         }
    }
    for(i=0;str[i];i++)
    {
        if((str[i]>64 && str[i]<91)||(str[i]>96 && str[i]<123))
         {
            count++;
            break;
         }
    }

    if(count==2)
      printf("String is Alpha-Numeric.");
    else
      printf("String is not Alpha-Numeric.");
}
