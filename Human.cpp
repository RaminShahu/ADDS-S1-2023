#include<iostream>
#include<string>
#include "Human.h"
using namespace std;

Human::Human()
{
    name = "Human";
    move = 'R';
}
Human::Human(string name)
{
    this->name = name;
}
char Human::makeMove()
{
    
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

