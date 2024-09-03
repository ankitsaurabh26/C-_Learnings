#include<iostream>
using namespace std;

class Male{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Man Speaking..."<<endl;
    }
};

class Female{
    public:
    int height;
    string color;

    public:
    void speak(){
        cout<<"Woman Speaking..."<<endl;
    }
};


class Hybrid : public Male, public Female{

};

int main(){

    Hybrid Obj1;

    // Both Male and Female has speak function if we call Obj1.speak(), which one should it be called from Male class or Female class
    // We use scope resolution to solve this issue
    Obj1.Male::speak(); //Man Speaking...
    Obj1.Female::speak(); //Woman Speaking...
    
    return 0;
}