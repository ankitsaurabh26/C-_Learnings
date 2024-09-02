#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    char *name;

    Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100]; //dynamic allocation
    }

    // DEEP COPY
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<"Deep Copy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        this->health = h;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout<<"Name : "<< this->name<<", ";
        cout<<"Health : "<<this->health<<", ";
        cout<<"Level : "<<this->level<<endl;
    }
};


int main(){

    Hero hero1;
    hero1.setHealth(12);
    char name[6] = "Ankit";
    hero1.setName(name);
    hero1.level = 'X';
    hero1.print();

    // SIMPLE COPY CONSTRUCTOR => SHALLOW COPYING : Comment out the Deep Copy Constructor to know it's effect
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'O'; // SHALLOW COPYING
    cout<<"After Changing the first character"<<endl;
    hero1.print();
    hero2.print();

    return 0;
}