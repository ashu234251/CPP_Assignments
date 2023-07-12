/*
16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main()
{
  char x;
  printf("Enter a Character\n");
  scanf("%c",&x);
  if(x>64 && x<91)
   {
    printf("%c is an Uppercase Alphabet",x);
   }
  else if (x>96 && x<123)
  {
    printf("%c is an Lowercase Alphabet",x); 
  }
  else if (x>47 && x<58)
  {
    printf("%c is a Digit",x);
  }
  else
  {
    printf("%c is a Special Character",x);
  }
return 0;
}