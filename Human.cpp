#include "Human.h"
using namespace std;

Human::Human()
{
    this->name = "Human";
}
Human::Human(string name)
{
    this->name = name;
}
char Human::makeMove()
{
    std::cout << "Enter move:";
    std::cin >> this->move;
    return this->move;
}
