#include "Player.h"

using namespace std;

Computer::Computer()
{
    this->name = "Computer";
}
char Computer::makeMove()
{
    this->move = 'R';
    return this->move;
}
