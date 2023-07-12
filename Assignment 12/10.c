// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>

void reverse(long);

int main()
{
    long n;
    printf("Enter a Number: ");
    scanf("%ld",&n);
    printf("Reverse of %ld is: ",n);
    reverse(n);
    return 0;
}

void reverse(long N)
{
    if(N>0)
    {
        printf("%d",N%10);
        reverse(N/10);
    }
}