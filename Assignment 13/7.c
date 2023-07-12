// 7. Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>

int hcf(int,int);

int main()
{
    int n1,n2;
    printf("Enter Two Numbers: \n");
    scanf("%d%d",&n1,&n2);
    printf("H.C.F of %d and %d is %d.",n1,n2,hcf(n1,n2));

    return 0;
}

int hcf(int n1,int n2)
{
    int x,y,h;
    x=(n1>n2)? n1:n2;
    y=(n1<n2)? n1:n2;
    if(x%y==0) 
      return y;
    hcf(x%y,y);
    
}