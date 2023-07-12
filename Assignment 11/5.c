// 5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>

void prime(int);

int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    prime(n);
    return 0;
}

void prime(int n)
{
    int i,j,count=0;

    
      for(i=2;i;i++)
       {
        for(j=2;j<=i/2;j++)
          {
            if(i%j==0)
             break;
          }
          if(j>i/2)
            {
                printf("%d ",i);
                count++;
            }
          
          if(count==n)
            break;
         
    
       }
    
}