// 4. Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int x,y,z,i,hcf=1;
    printf("Enter two Numbers:\n");
    scanf("%d%d",&x,&y);
    
    z=(x<y)?x:y ;

    for(i=1;i<=z;i++)
     {
        if(x%i==0 && y%i==0)
          hcf=i;
     }

    printf("HCF of %d and %d is %d",x,y,hcf);


}