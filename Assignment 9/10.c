// 10. C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float r1,r2,x,r,D;

    printf("Enter a,b,c constants in quadratic equation ax^2+bx+c=0 :\n");
    scanf("%f%f%f",&a,&b,&c);

    D=(b*b - 4*a*c);

    switch(D>=0)
      {
        case 0:
          r=(-b)/(2*a);
          x=(sqrt(-D)/2*a);
          printf("Imaginary Roots are %0.2f+i %0.2f and %0.2f-i %0.2f",r,x,r,x);
          break;

        case 1:

          switch (D!=0)
          {
            case 0:
            printf("Both Roots are %0.2f",(-b)/(2*a) );
            break;
           
            case 1:
            r1=((-b)+sqrt(D))/(2*a);
            r2=((-b)-sqrt(D))/(2*a);
            printf("Roots are %0.2f and %0.2f",r1,r2);
            break;
          }
          
      
      }
    return 0;
}