/*
11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter Marks in Hindi,English,Maths,Science,History\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    printf("Candidate passed the Examination");
    else
    printf("candidate failed");

    return 0;

}