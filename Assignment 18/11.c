// 9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>

void sort(char str[][50],int);

void sort(char str[ ][ 50],int n)
{
   int i,j;
   char min[50];
  for(i=0;i<n;i++)
    {
       strcpy(min,str[i]);
       for(j=i+1;j<n;j++)
         {
            if(strcmp(min,str[j])!=-1)
            {
              strcpy(min,str[j]);
              strcpy(str[j],str[i]);
              strcpy(str[i],min);
            }
         }
        printf("%s  ",min);
    }

}

int main()
{
    int n,i,j;

    printf("Enter Number of Strings: ");
    scanf("%d",&n);

    char str[n][50];
    printf("Enter %d Strings: \n",n);
    for(i=0;i<n;i++)
    {
       fflush(stdin);
       gets(str[i]);
    }

    sort(str,n);

    
    return 0;
}