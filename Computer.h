#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include<string>
#include<iostream>
#include "Move.h"
class Computer: public Player
{
    public:
    Computer();
    Move* makeMove();
};

#endif