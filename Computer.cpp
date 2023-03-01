#include "Player.h"
#include <string>
#include "Computer.h"
using namespace std;
Computer::Computer()
{
    name = "Computer";
    move = 'R';
}
char Computer::makeMove()
{
    
    return move;
}

