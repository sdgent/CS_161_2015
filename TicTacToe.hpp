#ifndef TICTACtOE_HPP
#define TICTACtOE_HPP

#include "Board.hpp"



class TicTacToe

{
private:
    Board playBoard;
    char player;

public:
    TicTacToe(char);
    void play();
};









#endif
