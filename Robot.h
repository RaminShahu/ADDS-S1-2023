#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include<string>
#include<vector>
class Robot:public Move
{
    public:
    Robot()
    {
        moveName = "Robot";
        beats.push_back("Ninja");
        beats.push_back("Zombie");
   
    }
};

#endif