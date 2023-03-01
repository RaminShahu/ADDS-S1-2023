#ifndef HUMAN_H
#define HUMAN_H
#include<string>
using namespace std;
#include "Player.h"
class Human: public Player
{
    public:
    char move;
    string name;
    Human();
    Human(string name);
    char makeMove();
    string getName();
};

#endif