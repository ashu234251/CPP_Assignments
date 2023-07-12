/*
10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Cost Price\n");
    scanf("%f",&x);
    printf("Enter Selling Price\n");
    scanf("%f",&y);
    if(x>y)
     { 
       printf("Loss Percentage is %f",(((x-y)*100)/x));
     }
    else if (x<y)
    { 
       printf("Profit Percentage is %f",(((y-x)*100)/x));  
    }
    else
    {
       printf("Cost Price and Selling are equal. So No Loss/Profit Percentage");
    }
    return 0;
    
}