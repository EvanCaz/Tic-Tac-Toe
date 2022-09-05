/*********************
 * Evan Cazares
 * TicTacToe
**********************/

#include "functions.h"

char displayBoard(char board[ROWS][COLUMNS]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << board[i][j];    
        }
        cout << endl;
    }
    
    return board;
}