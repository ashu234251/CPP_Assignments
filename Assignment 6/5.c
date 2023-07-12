//5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
 int main()
 {
    int n,i,sum=0;
    printf("Enter Value of N : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("Sum of Cubes of first N Natural Numbers is %d",sum);
    return 0;
 }