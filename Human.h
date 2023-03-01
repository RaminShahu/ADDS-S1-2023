#ifndef HUMAN_H
#define HUMAN_H
#include<string>
using namespace std;
#include "Player.h"
class Human: public Player
{
    public:
    Human();
    Human(string name);
    char makeMove();
};

#endif