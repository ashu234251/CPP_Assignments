//4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

#include<stdio.h>

int main()
{
    float r,A;
    printf("Enter Radius of Circle\n");
    scanf("%f",&r);
    A=3.147*r*r;
    printf("Area of Circle is %f having the radius %f",A,r);
    return 0;
}