// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i;
    float sum;
    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Average of these 10 Numbers is %0.3f",sum/10);

    return 0;
}