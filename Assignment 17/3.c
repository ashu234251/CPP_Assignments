// 3. Write a program to count vowels in a given string

#include<stdio.h>
int main()
{
    char str[50],vowels[11]={'a','e','i','o','u','A','E','I','O','U'};
    int i,j,count=0;

    printf("Enter a String: ");
    fgets(str,50,stdin);


    for(i=0;str[i];i++)
     {
        for(j=0;vowels[j];j++)
         {
           if(str[i]==vowels[j])
            {
              count++;
              break;
            }
         }
     }

    printf("Total Number of Vowels in the String is %d. ",count);
    return 0;
}