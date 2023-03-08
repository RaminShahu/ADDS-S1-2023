#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include<string>
#include<vector>
class Zombie:public Move
{
    public:
    Zombie()
    {
        moveName = "Zombie";
        beats.push_back("Pirate");
        beats.push_back("Monkey");

   
    }
};

#endif