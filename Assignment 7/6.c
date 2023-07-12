// 6. Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()
{
    int i,j;
    printf("Prime Numbers under 100 are: ");
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=(i/2);j++)
         {
           if(i%j==0)
            break;
         }
        if(j>(i/2))
          printf("%d  ",i);
    }
    return 0;
}