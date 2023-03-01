#include<iostream>

#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include "Human.h"


int main()
{
    Player* h1 = new Human("Ramin");
    Player* c1 = new Computer;
    h1->makeMove();
    Referee r1;
    Player* w1 = r1.refGame(h1,c1);
    std::cout << w1->getName() << "\n";
    return 0;
}