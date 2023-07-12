// 2. Write a function to calculate HCF of two numbers. (TSRS)

 #include<stdio.h>

int hcf(int,int);

 int main()
 {
   int x,y;
   printf("Enter Two Values: \n");
   scanf("%d%d",&x,&y);
   printf("H.C.F is %d",hcf(x,y));
   return 0;
 }

 int hcf(int X,int Y)
  {
    int i,b,count=1;
    b=(X<=Y)? X:Y;
    for(i=1;i<=b;i++)
     {
        if(X%i==0 && Y%i==0)
         {
           count=i;
         }
     }
    return count;

  }