#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main()
{
    char str[50];
    printf("Enter your Name: ");
    scanf("%s",str);
    system("cls");


    printf("                MATRIX PUZZLE \n");
    printf(" \n");
    printf("              RULE OF THIS GAME \n");
    printf(" \n");
    printf(" 1. You can move only 1 step at a time by arrow key \n");
    printf("          Move Up    :  by Up arrow key \n");
    printf("          Move Down  :  by Down arrow key \n");
    printf("          Move Left  :  by Left arrow key \n");
    printf("          Move Right :  by Right arrow key \n");
    printf(" \n");
    printf("2. You can move number at empty position only. \n");
    printf(" \n");
    printf("3. For each valid move : your total number of move will decrease by 1 \n");
    printf(" \n");
    printf("4. Winning Situation :  Number in a 4*4 Matrix should be in order from 1 to 15 \n");
    printf(" \n");
    printf(" Winning Situation :  \n");
    printf("------------------------\n");
    printf("|  1  |  2  |  3  |  4  | \n");
    printf("|  5  |  6  |  7  |  8  | \n");
    printf("|  9  | 10  | 11  | 12  | \n");
    printf("| 13  | 14  | 15  |     | \n");
    printf("------------------------\n");
    printf(" \n");
    printf("5. You can exit the game at any time by pressing 'E' or 'e' \n" );
    printf("So try to win it in minimum number of Moves.");
    printf(" \n");
    printf("Enter any Key to Start......");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");

    getch();
    system("cls");


    int a[15], moves,i,j,temp,min,max;
    moves=400;
    printf("\n\n");
    printf("  Hello %s,  Moves Remaining : %d \n",str,moves);
    printf("\n\n");


    min=1;
    max=min+14;

    srand(time(NULL));

    for(i=0;i<15;i++)
    {
         temp=rand()%15+min;
           for(j=0;j<=i-1;j++)
           {
              if(temp==a[j])
                break;
           }
           if(j==i)
            a[i]=temp;
           else
            i--;
    }
    printf("------------------------\n");
    for(i=0;i<4;i++)
        printf("| %2d  ",a[i]);
        printf("|");
        printf("\n");
    for(i=4;i<8;i++)
        printf("| %2d  ",a[i]);
        printf("|");
        printf("\n");
    for(i=8;i<12;i++)
        printf("| %2d  ",a[i]);
        printf("|");
        printf("\n");
    for(i=12;i<15;i++)
        printf("| %2d  ",a[i]);
        printf("|     |");
        printf("\n");
    printf("------------------------\n");




}
