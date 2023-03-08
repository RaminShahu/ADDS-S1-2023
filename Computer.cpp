#include "Player.h"
#include <string>
#include "Computer.h"
using namespace std;
Computer::Computer()
{
    name = "Computer";
    move = "Rock";
}
Move* Computer::makeMove()
{
     Move* rock = new Rock;
    return rock;
}
