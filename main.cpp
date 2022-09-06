/*********************
 * Evan Cazares
* TicTacToe
**********************/

#include "main.h"

int main() {
    cout << "Creating board..." << endl;
    std::string player1, player2;
    int turn = 1;
    char board[3][3] = {{'*','*','*'}, {'*','*','*'}, {'*','*','*'}};
    cout << "Board created, please enter player1 name: " << endl;
    getline(cin, player1);
    cout << "Board created, please enter player2 name: " << endl;
    getline(cin, player2);
    displayBoard(board);
    playerTurn(player1, turn);

    

    





    
}