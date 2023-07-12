// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
      {
        if(n%i==0)
        {
            printf("%d is not a Prime Number",n);
            break;
        }
      }

    if(i>(n/2))
      {
        printf("%d is a Prime Number",n);
      }

    return 0;
}