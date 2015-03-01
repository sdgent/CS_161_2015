// Author: Steven Gentry
// Created:2/19/15
// Last Modified:2/19/15
// Description:TicTacToe.cpp

#include <iostream>
#include "TicTacToe.hpp"


using namespace std;

TicTacToe::TicTacToe (char inPlayer)
{
    if (inPlayer=='x' || inPlayer== 'X')
        player='X';
    else
        player='O';
}

void TicTacToe::play()
{



        enum gameState{xWon,oWon,draw,Live};
        int state;
        bool goodmove=false;
        bool gameover=false;
        int x,y;


        do
        {
        do
           {
           cout << "Player " << player << ": please enter you move." << endl;
            playBoard.print();

            cin >> x >> y;

            if (player=='X')
             goodmove=playBoard.makeMove(x,y,'x');
            else
             goodmove=playBoard.makeMove(x,y,'o');
            if (goodmove==false)
                cout << "That square already taken."<< endl;

           }
           while(goodmove==false);

            if (player=='X')
                player='O';
            else
                player='X';

            state=playBoard.gameState();
            if(state==xWon)
            {
                playBoard.print();
                cout << "Player X has won!" << endl;
                gameover=true;
            }

            else if(state==oWon)
            {
                playBoard.print();
                cout << "Player O has won!" << endl;
                gameover=true;
            }

            else if (state==draw)
            {

                cout << "The game is a draw." << endl;
                gameover=true;
            }
            else
                gameover=false;
        }
        while (gameover==false);



}


int main()
{
    char choice;
 cout << "Which Player is First? x or o." << endl;
 cin >> choice;
 TicTacToe myGame(choice);
 myGame.play();


return 0;
}
