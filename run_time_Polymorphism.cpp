// Method Overriding
// RULES:
// 1. The method of the parent class and the method of the child class must have the same name
// 2. The method of the parent class and the method of the child class must have the same parameters
// 3. It is possible through inheritance only

#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){

    Dog D1;
    D1.speak();
    
    return 0;
}