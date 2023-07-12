// 8. Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int a,i,j,p=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Next Prime Number to %d is: ",a);
    i=a+1;
    while(!p)
    {
        for(j=2;j<=(i/2);j++)
         {
           if(i%j==0)
            break;
         }
        if(j>(i/2))
        {
          printf("%d  ",i);
          p=i;
        }
        i++;
    }
    return 0;
}