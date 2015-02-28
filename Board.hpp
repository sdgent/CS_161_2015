#ifndef BOARD_HPP
#define BOARD_HPP


class Board
{
private:
    char board [3][3];
    enum gmState{xWon,oWon,draw,Live};
    int turnNum;
public:
    Board();
    bool makeMove(int,int,char);
    int gameState();
    void print();

};



#endif
