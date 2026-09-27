#include <stdio.h>
void display_board(char board[3][3]);
int  win_con(char board[3][3], int plr1_choice, int plr2_choice, int game_on);
int tie_con(char board[3][3]);

int main()
{
    
    char board[3][3] = {
        
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
        
        
        };
    int postions[3] = {0,1,2};
    char plr1_choice = 's', plr2_choice;
    int plr1_x,plr1_y,plr2_x,plr2_y;
    
    printf("Hi welcome to tic tack toe\n");
    printf("Would you like to be X or O Plr1?\n");
    
    
    while (plr1_choice != 'x' && plr1_choice != 'o')
        scanf("%c",&plr1_choice);
        
    if (plr1_choice == 'x')
        plr2_choice = 'o';
    else
        plr2_choice = 'x';
    printf("plr1 :%c, plr2 :%c\n",plr1_choice,plr2_choice);
    
    
    
    //////////////
    int game_on = 1;
    //////////////
    
    while (game_on == 1)
    {
        printf("Plr 1 its your turn\n");
        printf("Choose a postion on the board\n");
        plr1_x = 10;
        plr1_y = 10;
        while (  (plr1_x != postions[plr1_x]) && (plr1_y != postions[plr1_y])  )
            {
                scanf("%d %d",&plr1_x,&plr1_y);
                if (board[plr1_x][plr1_y] != ' ')
                {
                    printf("Postion is already taken\nChoose again:\n");
                    plr1_x = 10;
                    plr1_y = 10;
                    continue;
                    
                    }
            }
            
            
        printf("\n");
        board[plr1_x][plr1_y] = plr1_choice;
        display_board(board);
        plr1_x = 10;
        plr1_y = 10;
        
        printf("\n");
        if (tie_con(board) == 11)
            {break;}
        if (win_con(board, plr1_choice, plr2_choice, game_on) == 10)
            {break;}
        ////////plr1 turn is over///////////
        
        printf("Its your turn Plr 2\n");
        printf("Choose a postion on the board\n");
        plr2_x = 10;
        plr2_y = 10;
        while (  (plr2_x != postions[plr2_x]) && (plr2_y != postions[plr2_y])  )
            {
                scanf("%d %d",&plr2_x,&plr2_y);
                if (board[plr2_x][plr2_y] != ' ')
                {
                    printf("Postion is already taken\nChoose again:\n");
                    plr2_x = 10;
                    plr2_y = 10;
                    continue;
                    
                    }
            }
            
            
        printf("\n");
        board[plr2_x][plr2_y] = plr2_choice;
        display_board(board);
        plr2_x = 10;
        plr2_y = 10;
        
        printf("\n");
        if (tie_con(board) == 1)
            {break;}
        if (win_con(board, plr1_choice, plr2_choice,game_on) == 10)
            {break;}
        
        
        
        
        
        
        
        
        
        
        
        
        }
    
    return 0;
    

    
    }
    
    
    
    
    
    
    
    
    
    
//////////////////////
    
    
void display_board(char board[3][3])
{
    int i = 0 , j;
    for (i; i<=2;i++)
    {
        for (j = 0;j<=2;j++)
         {   
             printf("%c",board[i][j]);
         
         
         }
        printf("\n");

        }   
}
    
////////////////////
int win_con(char board[3][3], int plr1_choice, int plr2_choice, int game_on)
{
    if ((board[0][0] == plr1_choice &&
     board[1][1] == plr1_choice &&
     board[2][2] == plr1_choice) ||

    (board[2][0] == plr1_choice &&
     board[1][1] == plr1_choice &&
     board[0][2] == plr1_choice) ||

    (board[0][0] == plr1_choice &&
     board[0][1] == plr1_choice &&
     board[0][2] == plr1_choice) ||

    (board[1][0] == plr1_choice &&
     board[1][1] == plr1_choice &&
     board[1][2] == plr1_choice) ||

    (board[2][0] == plr1_choice &&
     board[2][1] == plr1_choice &&
     board[2][2] == plr1_choice) ||

    (board[0][0] == plr1_choice &&
     board[1][0] == plr1_choice &&
     board[2][0] == plr1_choice) ||

    (board[0][1] == plr1_choice &&
     board[1][1] == plr1_choice &&
     board[2][1] == plr1_choice) ||

    (board[0][2] == plr1_choice &&
     board[1][2] == plr1_choice &&
     board[2][2] == plr1_choice))
        {
            printf("Plr 1 Wins!");
            return 10;

            }
            
            
    else if ((board[0][0] == plr2_choice &&
     board[1][1] == plr2_choice &&
     board[2][2] == plr2_choice) ||

    (board[2][0] == plr2_choice &&
     board[1][1] == plr2_choice &&
     board[0][2] == plr2_choice) ||

    (board[0][0] == plr2_choice &&
     board[0][1] == plr2_choice &&
     board[0][2] == plr2_choice) ||

    (board[1][0] == plr2_choice &&
     board[1][1] == plr2_choice &&
     board[1][2] == plr2_choice) ||

    (board[2][0] == plr2_choice &&
     board[2][1] == plr2_choice &&
     board[2][2] == plr2_choice) ||

    (board[0][0] == plr2_choice &&
     board[1][0] == plr2_choice &&
     board[2][0] == plr2_choice) ||

    (board[0][1] == plr2_choice &&
     board[1][1] == plr2_choice &&
     board[2][1] == plr2_choice) ||

    (board[0][2] == plr2_choice &&
     board[1][2] == plr2_choice &&
     board[2][2] == plr2_choice))
        {
            printf("Plr 2 Wins!");
            return 10;

            }
    
    }
    
/////////////////////////////////////
int tie_con(char board[3][3])
{
    if ((board[0][0] != ' ') && (board[0][1] != ' ') && (board[0][2] != ' ') && (board[1][0] != ' ') && (board[1][1] != ' ') && (board[1][2] != ' ') && (board[2][0] != ' ') && (board[2][1] != ' ') && (board[2][2] != ' ') )
            {   
                printf("Its a Tie");
                return 11;
            }
            return 0;
            }

            
        
        
        
        
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    