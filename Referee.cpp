
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include<string>


Referee::Referee() 
{

}
Player* Referee::refGame(Player *player1, Player *player2) {
    if (player1->move == 'R' && player2->move == 'R') return NULL;
    return player1;
}
