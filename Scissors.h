#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include<string>
#include<vector>
class Scissors:public Move
{
    public:
    Scissors()
    {
        moveName = "Scissors";
        beats.push_back("Paper");
   
    }
};

#endif