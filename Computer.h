#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include<string>
#include<iostream>
class Computer: public Player
{
    public:
    char move;
    string name;
    Computer();
    char makeMove();
    string getName();

};

#endif