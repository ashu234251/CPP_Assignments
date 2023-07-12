//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char x;
    printf("Enter a Alphabet\n");
    scanf("%c",&x);
    if(x<91 && x>64)
    {
        printf("Character is in Uppercase");
    }
    else if (x>96 && x<123)
    {
        printf("Character is in Lowercase");
    }
    else
        printf("Character is not a Alphabet");

    return 0;
    
}