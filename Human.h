#ifndef HUMAN_H
#define HUMAN_H
#include<string>
using namespace std;
#include "Player.h"
class Human: pulbic Player
{
    public:
    Human();
    Human(string name);
    char makeMove();

};

#endif