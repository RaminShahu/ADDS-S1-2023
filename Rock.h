#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include<string>
#include<vector>

class Rock:public Move
{
    public:
    Rock()
    {
        moveName = "Rock";
        beats.push_back("Scissors");
    }
};

#endif