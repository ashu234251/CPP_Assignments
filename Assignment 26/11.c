#include<stdio.h>

/*
int main()
{
    int a[3][3]={2,4,6,8,4,3,5,7,1};
    printf("%d",*(*(a+2)+3));

    return 0;
}
*/

int main()
{
    int (*p)[3][3];
    int a[3][3]={2,4,6,8,4,3,5,7,1};
    p=a;
    printf("%d",*(*(*p+2)+1));
}