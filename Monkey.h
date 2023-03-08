#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include<string>
#include<vector>
class Monkey:public Move
{
    public:
    Monkey()
    {
        moveName = "Monkey";
        beats.push_back("Ninja");
        beats.push_back("Robot");
   
    }
};

#endif