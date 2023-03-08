#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include<string>
#include<vector>
class Ninja:public Move
{
    public:
    Ninja()
    {
        moveName = "Ninja";
        beats.push_back("Pirate");
        beats.push_back("Zombie");
   
    }
};

#endif