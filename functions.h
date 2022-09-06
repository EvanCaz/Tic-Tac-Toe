/*********************
 * Evan Cazares
 * TicTacToe
**********************/

#ifndef COMMANDLINE_FUNCTIONS_H
    #define COMMANDLINE_FUNCTIONS_H

    #include <iostream>
    #include "main.h" // for const var

    using std::cout;
    using std::endl;

    void displayBoard(char[ROWS][COLUMNS]);
    void playerTurn(std::string, int);

#endif //COMMANDLINE_FUNCTIONS_H