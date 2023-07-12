/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative
      value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
      d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter Array Size: ");
    scanf("%d",&size);

    int a[size],n,i,d;
    printf("Enter %d Numbers: \n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter Position NUmber: ");
    scanf("%d",&n);
    printf("Enter Shift Direction Right(1) or Left(0) : ");
    scanf("%d",&d);

    if(d==1)
     {
       for(i=size-n;i<size;i++)
         {
            printf("%d ",a[i]);
         }
        for(i=0;i<size-n;i++)
         {
            printf("%d ",a[i]);
         }
     }
    else if(d==0)
     {
        for(i=n;i<size;i++)
         {
            printf("%d ",a[i]);
         }
        for(i=0;i<n;i++)
         {
            printf("%d ",a[i]);
         }
     }
      

     return 0;
}
*/

// Alternate

#include<stdio.h>
int main()
{
    int size;
    printf("Enter Array Size: ");
    scanf("%d",&size);

    int a[size],n,i,d,temp,x;
    char s[10];
    printf("Enter %d Numbers: \n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter Position NUmber: ");
    scanf("%d",&n);
    printf("Enter Shift Direction Right(1) or Left(0) : ");
    scanf("%s",s);

    if(s[0]=='R')
     {
      for(x=1;x<=n;x++)
      {
         temp=a[size-1];
        for(i=size-2;i>=0;i--)
         {
            a[i+1]=a[i];
         }
            a[0]=temp;
      }
       for(i=0;i<size;i++)
        {
          printf("%d ",a[i]);
        }     
     }
    else if(s[0]=='L')
     {
        for(x=1;x<=n;x++)
        {
          temp=a[0];
          for(i=0;i<=size-1;i++)
           {
              a[i]=a[i+1];
           }
              a[size-1]=temp;   
        }
      for(i=0;i<size;i++)
        {
          printf("%d ",a[i]);
        } 
     }
      

     return 0;
}
