#ifndef MOVE_H
#define MOVE_H
#include<string>
#include<vector>
using namespace std;
class Move 
{
    public:
    string moveName;
    vector<string> beats;
    string getName();
};

#endif