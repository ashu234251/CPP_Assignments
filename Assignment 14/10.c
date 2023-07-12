// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);

    int a[n],b[n],i;
    printf("Enter %d Numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Copied Values are: ");
    for(i=0;i<n;i++)
      {
        b[i]=a[i];
        printf("%d ",b[i]);
      }

    return 0;
}