// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter Two Numebrs: \n");
    scanf("%d%d",&a,&b);
    printf("Prime Numbers between %d and %d are: ",a,b);
    if(a==1)
      {
        a++;
      }
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=(i/2);j++)
         {
           if(i%j==0)
            break;
         }
        if(j>(i/2))
          printf("%d  ",i);
    }
    return 0;
}