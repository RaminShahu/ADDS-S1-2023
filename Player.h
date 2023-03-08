
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
using namespace std;
class Player 
{
    public:
    string move;
    string name;
    virtual Move* makeMove() = 0;
    string getName();
};

#endif