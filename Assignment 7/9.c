// 9. Write a program to check whether a given number is an Armstrong number or not.

// if number==summation of ( (digit)^number of digits ) e.g-153
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,count=0,sum=0,a,b;
    printf("Enter a Number: ");
    scanf("%d",&n);
     
    a=n;
    m=n;
    while(n)
    {
        n=n/10;
        count++;
        if(n==0)
          break;
    }

    while (a)
    {
        b=a%10;
        sum=sum+pow(b,count);
        a=a/10;
    }
    
    if(m==sum)
      printf("%d is an Armstrong Number",m);
    else
      printf("%d is not an Armstrong Number",m);

    return 0;
    

}