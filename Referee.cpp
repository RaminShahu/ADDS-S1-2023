
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include<string>


Referee::Referee() 
{

}
Player* Referee::refGame(Player *player1, Player *player2) {
    if (player1->makeMove() == player2->makeMove()) return NULL;

    return player1;
}
