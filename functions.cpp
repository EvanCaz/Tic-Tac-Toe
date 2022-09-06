/*********************
 * Evan Cazares
 * TicTacToe
**********************/

#include "functions.h"

void displayBoard(char board[ROWS][COLUMNS]){
    cout << "  | 0 | 1 | 2 |" << endl;
    for(int i=0;i<3;i++){
        cout << "---------------" << endl;
        cout << i;
        for(int j=0;j<3;j++){
            cout << std::left << " | " << board[i][j];
        }
        cout <<" |" << endl;
    }
    cout << "---------------" << endl;
}

void playerTurn(std::string playerName, int turn){
    char choice;
    int rw, clm;
    if(turn == 1){
        choice = 'x';
    } else {
        choice = 'o';
    }
    cout << " Which row would" << playerName << " like to place his \"" << choice << "\" ?" << endl; 
    cin >> rw;
}