/* 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10.
       Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int a[10],i;
    float se=0,so=0;
    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
           se=se+a[i];
        else
           so=so+a[i];
        
    }
    printf("Sum of Even Numbers is %f",se);
    printf("\nSum of Odd Numbers is %f",so);

    return 0;
}