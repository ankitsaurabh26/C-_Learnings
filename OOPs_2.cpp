#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;
    char level;

    Hero(int health, char level){
        cout<<"Parameterised Constructor Called"<<endl;
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp){  // always pass by reference
        cout<<"Copy Constructor called !!"<<endl;
        this->health = temp.health + 10;
        this->level = temp.level;
    }
};

int main()
{
    Hero Suresh(10,'A');

    // COPY CONSTRUCTOR
    Hero Ritesh(Suresh);

    cout<<"Ritesh Health = Suresh Health = "<<Ritesh.health<<endl;

    return 0;
}