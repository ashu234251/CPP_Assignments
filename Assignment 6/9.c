//9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two Numbers :\n");
    scanf("%d%d",&a,&b);

    if(a>=b)
    {
        for(i=1;i<=b;i++)
         {
             if((a*i)%b==0)
              break;
         }
      printf("LCM is %d",a*i);
    }

    else if(a<b)
    {
       for(i=1;i<=a;i++)
         {
             if((b*i)%a==0)
              break;
         }
      printf("LCM is %d",b*i);
    }
}