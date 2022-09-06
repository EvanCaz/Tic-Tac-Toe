/*********************
 * Evan Cazares
 * TicTacToe
**********************/

#include "functions.h"

void displayBoard(char board[ROWS][COLUMNS]){
    cout << " | 0 | 1 | 2 |" << endl;
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

void playerTurn(std::string playerName, int turn, char board[ROWS][COLUMNS]){
    char choice;
    int rw, clm, dtr;
    if(turn == 1){
        choice = 'x';
    } else {
        choice = 'o';
    }
    do{
        cout << "Which row would " << playerName << " like to place their \"" << choice << "\" ?(0-3)" << endl; 
        cin >> rw;
        while (!cin || rw < 0 || rw > 2) {
            cout << "Invalid input. What row? "; 
            cin.clear();
            cin.ignore(); // input validation can be turned into function as to not repeat code
            cin >> rw;
        }
    cout << "Which column would " << playerName << " like to place their \"" << choice << "\" ?(0-3)" << endl; 
        cin >> clm;
        while (!cin || clm < 0 || clm > 2) {
            cout << "Invalid input. What column? "; 
            cin.clear();
            cin.ignore(); // input validation can be turned into function as to not repeat code
            cin >> clm;
        }
        if(board[rw][clm] == '*'){
            board[rw][clm] = choice;
            break;
        } else {
            cout << "Someone already chose that spot, choose another" << endl;
            dtr = 0;
        }
    } while(dtr == 0);
}

bool winner(char board[ROWS][COLUMNS]){
    int x = 0;
    int i = 0;
    for(i=0;i<3;i++){
        if(board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x'){ // checks all rows for eqaulity player1
            x = 1;
        } else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x'){ // checks all columns for equality player1
            x = 1;
        }
    }
    if(board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x'){ // checks top left-bottom right equality playey1
        x = 1;
    } else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x'){ // chekcs bottom left-topright for equality player1
        x = 1;
    }

    if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o'){ // checks top left-bottom right equality playey2
        x = 2;
    } else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o'){ // chekcs bottom left-topright for equality player2
        x = 2;
    }

    for(i=0;i<3;i++){
        if(board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o'){ // checks all rows for eqaulity plaery2
            x = 2;
        } else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o'){ // checks all columns for equality player2
            x = 2;
        }
    }
    
    return x;
}