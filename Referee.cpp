
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include<string>


Referee::Referee() 
{

}
Player* Referee::refGame(Player *player1, Player *player2) {
   char move1 = player1->makeMove();
   char move2 = player2->makeMove();
    if (move1 == move2) return NULL;

    if (move1 == 'R' && move2 == 'S')
    {
        return player1;
    }
    else if (move1 == 'S' && move2 == 'P')
    {
        return player1;
    }
    else if (move1 == 'P' && move2 == 'R')
    {
        return player1;
    }
    return player2;
}
