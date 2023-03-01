#include "Player.h"
#include <string>
using namespace std;
Computer::Computer()
{
    name = "Computer";
}
char Computer::makeMove()
{
     move = 'R';
    return this->move;
}
