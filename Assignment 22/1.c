// 1. Define a function to input variable length string and store it in an array without memory wastage.

#include<stdio.h>
#include<stdlib.h>

void input();
int main()
{
    char *p,c;
    int i=0;
    p=(char*)malloc(sizeof(char));
    printf("Enter a String: ");

    while(*(p+i-1)!='\n')
    {
     *(p+i)=getc(stdin);
     i++;
     p=(char*)realloc(p,(i+1)*(sizeof(char)));
    }
    *(p+i)='\0';
    printf("Entered String is %s",p);
    free(p);

    return 0;
}

/* Doubt-- p=(char*)malloc(sizeof(char));  and suppose p is having value 1000,(i.e address of char variable is 1000)
           and then I increase the size using realloc, p=(char*)realloc(p,10);
           then, will value of p remains 1000?
           if yes, then is it not possible that memory location from 1005 to 1009 are already booked.

/*
void input()
{
    char *p;
    p=(char*)calloc(10,sizeof(char));
    printf("Enter a String: ");
    gets(p);
    printf("Entered String is: %s",p);
    free(p);
    printf("\n%s",p);
}
*/