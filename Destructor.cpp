#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    public:

    Hero(){
        cout<<"Simple Constructor Called"<<endl;
    }

    // DESTRUCTOR
    ~Hero(){
        cout<<"Destructor bhai is called"<<endl;
    }
};


int main(){

    // Static
    Hero a;
    // NOTE: For objects which are created statically, the destructor is called automatically for them

    // Dynamic
    Hero *b = new Hero();
    // we manually need to call destructor for dynamically created objects
    delete b; // Comment this statement and see the change in the output

    return 0;
}