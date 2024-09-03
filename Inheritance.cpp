#include<iostream>
using namespace std;

// PROTECTED : Similar to Private
// 1. Child class can access
// 2. Accessible inside own class

class Human{
    public:
    int height;
    int age;

    private:
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

// class Child_Class_Name : Mode Parent_Class_Name 
class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping :)"<<endl;
    }
};

// Protected
class Female : protected Human{  
    public:
    int getHeight(){    // In parent class height was public, Human here is inherited in protected manner => Public + Protected = Protected => Only parent & child class can access the height
        return this->height;
    }
};

class Dog : private Female{
    public:
    int getDogHeight(){
        return this->height;  // protected + private = private, so Human height here becomes private
    }
};

int main(){

    Male Jack;
    cout<<Jack.age<<endl;
    Jack.sleep();

    Female Alina;
    cout<<Alina.getHeight()<<endl;

    Dog Pug;
    cout<<Pug.getDogHeight()<<endl;

    return 0;
}