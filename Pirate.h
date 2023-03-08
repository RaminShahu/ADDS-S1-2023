#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include<string>
#include<vector>
class Pirate:public Move
{
    public:
    Pirate()
    {
        moveName = "Pirate";
        beats.push_back("Monkey");
        beats.push_back("Robot");
   
    }
};

#endif