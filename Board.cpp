// Author: Steven Gentry
// Created:2/18/15
// Last Modified:2/19/15
// Description:Board.cpp


#include <iostream>
#include "Board.hpp"




using namespace std;





//***default constructor
Board::Board()

{

    turnNum=0;
    for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                    board[i][j]='.';

}
        bool Board:: makeMove(int x,int y,char inPlay)
        {
            if(board[x][y]!='.')
                return false;
            if (inPlay=='x')
            {
                board[x][y]='x';
                return true;
            }
            else if (inPlay=='o')
            {
                board[x][y]='o';
                return true;
            }

        }

    int Board::gameState()
    {
        char player;
        bool win=false;
        turnNum++;


        if((board[0][0]=='x' ||  board[0][0]=='o') &&board[0][0]==board[1][0] && board[1][0]==board[2][0])
                {

                    player=board[0][0];
                    win=true;
                }



        else if((board[0][1]=='x' || board[0][1]=='o' )&& board[0][1]==board [1][1] && board[1][1]==board[2][1])
              {

                player=board[0][1];
                win=true;
              }
        else if((board[0][2]=='x' || board[0][2]=='o' )&& board[0][2]==board[1][2] && board[1][2]==board[2][2])
              {

                player=board[0][2];
                win=true;
              }
        else if((board[0][0]=='x' || board[0][0]=='o') && board[0][0]==board [0][1] && board[0][1]==board[0][2])
              {

                player=board[0][0];
                win=true;
              }
        else if((board[1][0]=='x' || board[1][0]=='o' )&& board[1][0]==board [1][1]&& board[1][1]==board[1][2])
              {

                player=board[1][0];
                win=true;
              }
        else if((board[2][0]=='x' || board[2][0]== 'o') && board[2][0]==board [2][1] && board[2][1]==board[2][2])
              {

                player=board[2][0];
                win=true;
              }
        else if((board[0][2]=='x' || board[0][2]=='o' )&& board[0][2]==board [1][1] && board[1][1]==board[2][0])
              {

                player=board[0][2];
                win=true;
              }
        else if((board[0][0]=='x' || board[0][0]== 'o') && board[0][0]==board [1][1] && board[1][1]==board[2][2])
              {

                player=board[0][0];
                win=true;
              }



         if (win==true && player=='x')
            return xWon;
            else if(win==true && player=='o')
            return oWon;
 if (turnNum==9)
            return draw;
        else
            return Live;


    }



    void Board:: print()
    {
    cout << "   ";
    for(int i=0;i<3;i++)
    {
     cout <<i << " ";

    }
    cout << endl;

        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
             {
                if(j==0)
                    {
                      cout<<i << "  ";
                    }
                    cout << board[i][j]<<" ";
                if(j==2)

                    cout << endl;
             }
             cout << endl;

    }







