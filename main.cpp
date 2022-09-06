/*********************
 * Evan Cazares
 * TicTacToe
**********************/

#include "main.h"

int main() {
    cout << "Creating board..." << endl;
    std::string player1, player2;
    int turn = 1, gameover = 0, turnCount = 0;
    char board[3][3] = {{'*','*','*'}, {'*','*','*'}, {'*','*','*'}}; // turn into function for replayabiltiy
    cout << "Board created, please enter player1 name: " << endl;
    getline(cin, player1);
    cout << "Please enter player2 name: " << endl;
    getline(cin, player2);
    while (gameover == 0){
        displayBoard(board);
        if(turn == 1){
            playerTurn(player1, turn, board);
            turn = 2;
        } else {playerTurn(player2, turn, board); turn = 1;}
        gameover = winner(board);
        turnCount++; // to determine if cat wins
        if(turnCount == 9){
            gameover = 3;
            break;
        }
    }
    displayBoard(board);
    cout << "We have a winner!" << endl;
    if(gameover == 1){
        cout << player1 << " won the game." << endl;
    } else if( gameover == 2){
         cout << player2 << " won the game.";
        } else if (gameover == 3){
            cout << "The cat won";
        }
}