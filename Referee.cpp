#include "Player.h"
#include "Computer.h"
#include<string>
#include "Referee.h"

Referee::Referee() 
{

}
Player* Referee::refGame(Player *player1, Player *player2) {
   Move* move1 = player1->makeMove();
   Move* move2 = player2->makeMove();
   string move = player1->getName();
  
   for (int i = 0;i<move2->beats.size();i++)
   {
     if (move2->beats[i] == move)
     {
        return player2;
     }
   }
   move = player2->getName();
   for (int i = 0;i<move1->beats.size();i++)
   {
        if (move1->beats[i] == move)
        {
            return player1;
        }
   }   
    return NULL;
}