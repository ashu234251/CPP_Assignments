//1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Month Number:");
    scanf("%d",&n);
    switch (n)
    {
        case 1: 
          printf("Number of days are 31.");
          break;
        case 2: 
          printf("Number of days are 28/29.");
          break;
        case 3: 
          printf("Number of days are 31.");
          break;
        case 4: 
          printf("Number of days are 30.");
          break;
        case 5: 
          printf("Number of days are 31.");
          break;
        case 6: 
          printf("Number of days are 30.");
          break;
        case 7: 
          printf("Number of days are 31.");
          break;
        case 8: 
          printf("Number of days are 31.");
          break;
        case 9: 
          printf("Number of days are 30.");
          break;
        case 10: 
          printf("Number of days are 31.");
          break;
        case 11: 
          printf("Number of days are 30.");
          break;
        case 12: 
          printf("Number of days are 31.");
          break;
        default:
          printf("This Month Number doesn't exist.");
       
    }
}