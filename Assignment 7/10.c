// 10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<math.h>
int main()
{
    int i,count=0,sum=0,x,y,a;

  for(i=1;i<=1000;i++)
   {
     x=i;
     y=i;
     count=0;
     sum=0;
     
     while(x)      // Calculating Number of digits in i
     {
       x=x/10;
       count++;
     }

     while(y)      // Calculating Sum of powered digits.
     {
       a=y%10;
       y=y/10;
       sum=sum+pow(a,count);
     }

     if(sum==i)    // Checking if armstrong Number or not.
       printf("%d ",i);

   }

    return 0;
}
