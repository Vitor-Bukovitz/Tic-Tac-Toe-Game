#include <stdio.h>

void board(int boardInteger[3][3], char boardChar[3][3]){

    int i, j;

    printf("\n\t------BOARD------\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(boardChar[i][j] != ' '){
                printf("\t%c", boardChar[i][j]);
            }
            else{
                printf("\t%d", boardInteger[i][j]);
            }

        }
        printf("\n");
    }
    printf("\n\t-----------------\n");

}


int main(){
    int boardInteger[3][3];
    char boardChar[3][3];
    int i, j, number = 1;
    int chooser;
    int flag = 1;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            boardInteger[i][j] = number++;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            boardChar[i][j] = ' ';
        }
    }

    printf("\n\t------BOARD------\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\t%d", boardInteger[i][j]);
        }
        printf("\n");
    }
    printf("\n\t-----------------\n");



    // GAME
    while(flag == 1){
        printf("\nPlayer 1:\n");
        scanf("%d", &chooser);

        switch (chooser)
        {
        case 1:
            boardChar[0][0] = 'X';
            break;
        
        case 2:
            boardChar[0][1] = 'X';
            break;

        case 3:
            boardChar[0][2] = 'X';
            break;

        case 4:
            boardChar[1][0] = 'X';
            break;

        case 5:
            boardChar[1][1] = 'X';
            break;

        case 6:
            boardChar[1][2] = 'X';
            break;

        case 7:
            boardChar[2][0] = 'X';
            break;

        case 8:
            boardChar[2][1] = 'X';
            break;

        case 9:
            boardChar[2][2] = 'X';
            break;

        default:
            break;
        }

        board(boardInteger, boardChar);

        
        printf("\nPlayer 2:\n");
        scanf("%d", &chooser);

        switch (chooser)
        {
        case 1:
            boardChar[0][0] = 'O';
            break;
        
        case 2:
            boardChar[0][1] = 'O';
            break;

        case 3:
            boardChar[0][2] = 'O';
            break;

        case 4:
            boardChar[1][0] = 'O';
            break;

        case 5:
            boardChar[1][1] = 'O';
            break;

        case 6:
            boardChar[1][2] = 'O';
            break;

        case 7:
            boardChar[2][0] = 'O';
            break;

        case 8:
            boardChar[2][1] = 'O';
            break;

        case 9:
            boardChar[2][2] = 'O';
            break;

        default:
            break;
        }

        board(boardInteger, boardChar);

        if(((boardChar[0][0] == 'X') && (boardChar[0][1] == 'X') && (boardChar[0][2] == 'X')) || ((boardChar[0][0] == 'O') && (boardChar[0][1] == 'O') && (boardChar[0][2] == 'O'))){
            flag = 0;
            if(boardChar[0][0] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][0] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[1][0] == 'X') && (boardChar[1][1] == 'X') && (boardChar[1][2] == 'X')) || ((boardChar[1][0] == 'O') && (boardChar[1][1] == 'O') && (boardChar[1][2] == 'O'))){
            flag = 0;
            if(boardChar[1][0] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[1][0] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[2][0] == 'X') && (boardChar[2][1] == 'X') && (boardChar[2][2] == 'X')) || ((boardChar[2][0] == 'O') && (boardChar[2][1] == 'O') && (boardChar[2][2] == 'O'))){
            flag = 0;
            if(boardChar[2][0] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[2][0] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[0][0] == 'X') && (boardChar[1][0] == 'X') && (boardChar[2][0] == 'X')) || ((boardChar[0][0] == 'O') && (boardChar[1][0] == 'O') && (boardChar[2][0] == 'O'))){
            flag = 0;
            if(boardChar[0][0] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][0] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[0][1] == 'X') && (boardChar[1][1] == 'X') && (boardChar[2][1] == 'X')) || ((boardChar[0][1] == 'O') && (boardChar[1][1] == 'O') && (boardChar[2][1] == 'O'))){
            flag = 0;
            if(boardChar[0][1] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][1] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[0][2] == 'X') && (boardChar[1][2] == 'X') && (boardChar[2][2] == 'X')) || ((boardChar[0][2] == 'O') && (boardChar[1][2] == 'O') && (boardChar[2][2] == 'O'))){
            flag = 0;
            if(boardChar[0][2] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][2] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[0][0] == 'X') && (boardChar[1][1] == 'X') && (boardChar[2][2] == 'X')) || ((boardChar[0][0] == 'O') && (boardChar[1][1] == 'O') && (boardChar[2][2] == 'O'))){
            flag = 0;
            if(boardChar[0][0] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][0] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
        if(((boardChar[0][2] == 'X') && (boardChar[1][1] == 'X') && (boardChar[2][0] == 'X')) || ((boardChar[0][2] == 'O') && (boardChar[1][1] == 'O') && (boardChar[2][0] == 'O'))){
            flag = 0;
            if(boardChar[0][2] == 'X') printf("\nPlayer 1 is the Winner!\n");
            if(boardChar[0][2] == 'O') printf("\nPlayer 2 is the Winner!\n");
        }
    }


    return 0;

}