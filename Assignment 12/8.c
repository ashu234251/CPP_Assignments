// 8. Write a recursive function to print binary of a given decimal number

 #include<stdio.h>

 void binary(int);

 int main()
 {
    int n;
    printf("Enter a Decimal Number: ");
    scanf("%d",&n);
    printf("Binary Number of %d is: ",n);
    binary(n);
 }

 void binary(int N)
 {
   if(N>0)
   { 
     binary(N/2);
     printf("%d",N%2);
   }
 }

 /* OR
 #include<stdio.h>

void binary(int);

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    binary(n);

    return 0;
}

void binary(int n)
{
    if(n==0)
      return;
    binary(n>>1);
    printf("%d",n&1);
      
}

*/
