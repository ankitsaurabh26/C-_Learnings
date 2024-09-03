#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Human{
    public:
    int height;
    string color;

    public:
    void speak(){
        cout<<"Speaking..."<<endl;
    }
};


class Hybrid : public Animal, public Human{

};

int main(){

    Hybrid Obj1;
    Obj1.speak();
    Obj1.bark();
    
    return 0;
}