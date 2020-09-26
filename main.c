#include <stdio.h>
#include <conio.h>
int k=0;
char square[3][3] = {{'1', '2','3'} ,{'4', '5', '6'} ,{'7', '8', '9'}};
insert(int choice,char mark,int player)
{     k=0;
    if (choice == 1 && square[0][0] == '1')
            square[0][0] = mark;

        else if (choice == 2 && square[0][1] == '2')
            square[0][1] = mark;

        else if (choice == 3 && square[0][2] == '3')
            square[0][2] = mark;

        else if (choice == 4 && square[1][0] == '4')
            square[1][0] = mark;

        else if (choice == 5 && square[1][1] == '5')
            square[1][1] = mark;

        else if (choice == 6 && square[1][2] == '6')
            square[1][2] = mark;

        else if (choice == 7 && square[2][0] == '7')
            square[2][0] = mark;

        else if (choice == 8 && square[2][1] == '8')
            square[2][1] = mark;

        else if (choice == 9 && square[2][2] == '9')
            square[2][2] = mark;

        else
        {
            printf("Invalid move ");
            k=1;
            getch();
        }
}

int isWinning();
void board();

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        insert(choice,mark,player);
        i = isWinning();
if (k!=1)
{
        player++;
}
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}



int isWinning()
{
    if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
        return 1;

    else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
        return 1;

    else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
        return 1;

    else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
        return 1;

    else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
        return 1;

    else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
        return 1;

    else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
        return 1;

    else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
        return 1;

    else if (square[0][0] != '1' && square[0][1] != '2' && square[0][2] != '3' &&
        square[1][0] != '4' && square[1][1] != '5' && square[1][2] != '6' && square[2][0]
        != '7' && square[2][1] != '8' && square[2][2] != '9')

        return 0;
    else
        return  - 1;
}





void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[0][0], square[0][1], square[0][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[1][0], square[1][1], square[1][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[2][0], square[2][1], square[2][2]);

    printf("     |     |     \n\n");
}
