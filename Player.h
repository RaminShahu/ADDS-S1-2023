using namespace std;
class Player 
{
    public:
    char move;
    string name;
    virtual char makeMove() = 0;
    string getName();
};

#endif