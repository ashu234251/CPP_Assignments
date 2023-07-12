// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    switch (n>0)
    {
     case 1:
        printf("Negative Value is: %d",-n);
        break;
    
     case 0:
          switch(n==0)
          {
            case 1:
            printf("Zero doesn't has positive or nagative value.");
            break;
            case 0:
            printf("Postive Value is: %d",-n);
            break;
          }
        break;
    }


    return 0;
}