/* 9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )
*/
/*
#include<stdio.h>
#include<string.h>

void reverse(char []);
int r;
int main()
{
    char str[50]={};
    printf("Enter String: ");
    gets(str);
    
    reverse(str);
    return 0;
}

void reverse(char str[])
{  
  int i,j,l;
  l=strlen(str);
  for(i=l-1;i>=0;i--)
   {
     if(str[i]==' ')
      {
        for(j=i+1;(str[j]!=' ' && j<l-1);j++)
        {
         printf("%c",str[j]);
        }
        printf(" ");
      }
     if(i==0)
      {
        for(j=0;str[j]!=' ';j++)
         {
            printf("%c",str[j]);
         }
      }

   }

}
*/
// Sir Alternate

/*
#include<stdio.h>
#include<string.h>

void reverse(char []);
int main()
{
    char str[50]={ };
    printf("Enter String: ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';
    
    reverse(str);
    return 0;
}

void reverse(char str[])
{  
  int i,j,k,l,c;
  char str1[50]={};
  
  for(i=0;str[i];i++)
   {
     if(str[i]==' ')
      {     
       str1[i]=' ';
      }
     else
      {
        l=0;
        c=1;
        for(j=i;(str[j]!=' ' && str[j]!='\0');j++)
         l++;
        for(k=i;k<i+l;k++)
         {
          str1[k]=str[l+i-c];
          c++;
         }
         i=i+l-1;
      }
   }
   printf("%s",str1);
}

*/

#include<stdio.h>
#include<string.h>

void swap(char [],int,int );
int main()
{
  char str[50],temp;
  int i=0,j,start,end=0;
  printf("Enter a String: ");
  gets(str);
     
  while(str[i])
  {
    if(str[i]==' ')
     i++;
    else
     {
      start=i;
      end=i;
      while(str[i]!=' ' && str[i]!='\0')
      {
        end++;
        i++;
      }
      swap(str,start,end-1);
     }
  }
  swap(str,0,strlen(str)-1);
  printf("%s",str);
  return 0;
}

 void swap(char str[],int start,int l)
 {
  char temp;
  while(start<l)
  {
    temp=str[start];
    str[start]=str[l];
    str[l]=temp;
    start++;
    l--;
  }
 }
  
