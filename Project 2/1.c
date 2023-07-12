//  Tic Tac Toe Game.

#include<stdio.h>
#include<string.h>

void Smart(char[],char []);
void Evil(char[],char []);
void Player(char[],char []);
void player_array(char []);
void condition(char [],char[],char[]);
int main()
{
    int choice;
    char player1[30],player2[30];


    while(1)
    {
        printf("\n\n");
        printf("1. Want to play with Smart Computer.\n");
        printf("2. Want to play with Evil Computer.\n");
        printf("3. Want to play with Player.\n");
        printf("4. Exit.\n");

        printf("Enter Your Choice: \n");
        scanf("%d",&choice);

     switch(choice)
      {
        case 1:
           system("cls");
           printf("Enter Your Name: ");
           fflush(stdin);
           gets(player1);
           strcpy(player2,"Computer");
           system("cls");
           Smart(player1,player2);
           break;
        case 2:
           system("cls");
           printf("Enter Your Name: ");
           fflush(stdin);
           gets(player1);
           strcpy(player2,"Computer");
           Evil(player1,player2);
           break;
        case 3:
           system("cls");
           printf("Enter Name of First Player: ");
           fflush(stdin);
           gets(player1);
           printf("Enter Name of Second Player: ");
           fflush(stdin);
           gets(player2);
           Player(player1,player2);
           break;
        case 4:
           printf("\n\nThank You for your Time.  Enter any key to exit.");
           getch();
           exit(0);
        default:
           printf("Wrong Input. Please Type the Correct Input.\n\n");
      }
    }

}

void Smart(char player1[30],char player2[30])
{
    system("cls");
    printf("\n##################### Tic Tac Toe #####################\n\n\n");
    printf("%s: X\n",player1);
    printf("%s: 0\n",player2);

}
void Evil(char player1[30],char player2[30])
{
    system("cls");
    printf("\n##################### Tic Tac Toe #####################\n\n\n");
    printf("%s: X\n",player1);
    printf("%s: 0\n",player2);

}


void Player(char player1[30],char player2[30])
{
    system("cls");
    printf("\n########################## Tic Tac Toe ##########################\n\n\n");
    printf("%s: X\n",player1);
    printf("%s: 0\n\n",player2);

    static char a[9]={'1','2','3','4','5','6','7','8','9'};

    player_array(a);
    printf("\n##############################################################\n\n");
    condition(a,player1,player2);
}

void condition(char a[],char player1[],char player2[])
{
      static int m,i=0;

        while(i<9)
         {
          if(i%2==0)
           {
            printf("%s, Enter Marking Place: ",player1);
            scanf("%d",&m);
            a[m-1]='X';

            if((a[0]=='X' && a[1]=='X' && a[2]=='X')||(a[3]=='X' && a[4]=='X' && a[5]=='X')||(a[6]=='X' && a[7]=='X' && a[8]=='X')
                ||(a[0]=='X' && a[3]=='X' && a[6]=='X')||(a[1]=='X' && a[4]=='X' && a[7]=='X')||(a[2]=='X' && a[5]=='X' && a[8]=='X')
                ||(a[0]=='X' && a[4]=='X' && a[8]=='X')||(a[2]=='X' && a[4]=='X' && a[6]=='X'))
            {
                Player(player1,player2);
                printf("%s Won.",player1);
                exit(0);
            }

            i++;
            Player(player1,player2);
           }
        else
        {
            printf("%s, Enter Marking Place: ",player2);
            scanf("%d",&m);
            a[m-1]='0';
            if((a[0]=='0' && a[1]=='0' && a[2]=='0')||(a[3]=='0' && a[4]=='0' && a[5]=='0')||(a[6]=='0' && a[7]=='0' && a[8]=='0')
                ||(a[0]=='0' && a[3]=='0' && a[6]=='0')||(a[1]=='0' && a[4]=='0' && a[7]=='0')||(a[2]=='0' && a[5]=='0' && a[8]=='0')
                ||(a[0]=='0' && a[4]=='0' && a[8]=='0')||(a[2]=='0' && a[4]=='0' && a[6]=='0'))
            {
                Player(player1,player2);
                printf("%s Won.",player2);
                exit(0);
            }
            i++;
            Player(player1,player2);
        }
    }
}

void player_array(char a[9])
{
    int i,j,x=0;
    for(i=0;i<3;i++)
    {
        printf("     |     |   \n");
        for(j=0;j<3;j++)
        {
            if(j!=2)
             {
               printf("  %c  |",a[x]);
               x++;
             }
            else
             {
               printf("  %c   ",a[x]);
               x++;
             }
        }
        printf("\n_____|_____|_____\n");
    }

}
