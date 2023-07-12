/*
3. Write a program which takes the day number of a week and displays a
   unique greeting message for the day.
*/

#include<stdio.h>
int main()
{
 int n;
 printf("Enter day number (between 1 & 7) : ");
 scanf("%d",&n);

 switch (n)
 {
 case 1:
    printf("JAI HIND");
    break;
 case 2:
    printf("GOOD MORNING");
    break;
 case 3:
    printf("VANDE MATARAM");
    break;
 case 4:
    printf("NAMASTE");
    break;
 case 5:
    printf("SALAM MALEKUM");
    break;
 case 6:
    printf("INQUILAB ZINDABAD");
    break;
 case 7:
    printf("SHUBH PRABHAT");
    break;
 
 default:
    printf("DAY INVALID");
    break;
 }
 return 0;
}