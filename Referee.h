#ifndef REFREE_H
#define REFREE_H
#include "Player.h"
#include "Computer.h"

class Refree
{
    public:
    Refree();
    Player* refGame(Player *player1, Player *player2);
};