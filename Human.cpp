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
    name = name;
}
char Human::makeMove()
{
    std::cout << "Enter move:";
    std::cin >> move;
    return move;
}

string Human::getName() 
{
    return name;
}
