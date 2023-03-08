#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include<string>
#include<vector>
class Paper:public Move
{
    public:
    Paper()
    {
        moveName = "Paper";
        beats.push_back("Rock");
   
    }
};

#endif