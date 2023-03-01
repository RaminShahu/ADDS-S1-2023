#ifndef "PLAYER_H"
#define "PLAYER_H"
#include <iostream>
#include <string>
using namespace std;
class Player 
{
    public:
    virtual char makeMove() = 0;
    string getName() = 0;
};

#endif