//5. Write a program to check whether two given numbers are co-prime numbers or not

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

    if(hcf==1)
      printf("%d and %d are coprime numbers",x,y);
    else
      printf("%d and %d are not coprime numbers",x,y);


}