/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>
int main()
{
    float n,bill;
    printf("Enter Units Value:");
    scanf("%f",&n);

    switch (n>50)
    {
    case 0:
        bill=n*0.5;
        break;

    case 1: switch(n>150)
            {
             case 0:
               bill = 25+(n-50)*0.75;
               break;
             case 1:
                switch(n>250)
                  {
                    case 0:
                      bill = (100+(n-150)*1.2);
                      break;
                    case 1:
                      bill = 220+(n-250)*1.5;
                      break;
                  }
                break;
            }
             break;
             
             
    }
    
    printf("Electricity bill is %0.3f",1.2*bill);
    return 0;
}