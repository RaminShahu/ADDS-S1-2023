#include<iostream>
#include<string>
#include "Human.h"

using namespace std;

Human::Human()
{
    name = "Human";
    
}
Human::Human(string name)
{
    this->name = name;
}
Move* Human::makeMove()
{
   // std::cout << "Enter move: ";
    std::cin >> move;
    // Checking which move object to return
    if (move == "Rock")
    {
        Move* rock = new Rock;
        return rock;
    }
    else if (move == "Paper")
    {
        Move* paper = new Paper;
        return paper;
    }
    else if (move == "Scissors")
    {
        Move* sci = new Scissors;
        return sci;
    }
    else if (move == "Robot")
    {
        Move* robot = new Robot;
        return robot;
    }
    else if (move == "Monkey")
    {
        Move* mon = new Monkey;
        return mon;
    }
    else if (move == "Pirate")
    {
        Move* pir = new Pirate;
        return pir;
    }
    else if (move == "Ninja")
    {
        Move* nin = new Ninja;
        return nin;
    }
    else if (move == "Zombie")
    {
        Move* zom = new Zombie;
        return zom;
    }
    else
    {
        return NULL;
    }
    return NULL;
}