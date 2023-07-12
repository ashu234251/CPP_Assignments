// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from tmaxe user.

#include<stdio.h>
int main()
{
    int a[10],i,max;

    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
          max=a[i];
    }
    printf("Greatest Value is %d",max);

    return 0;
}