// 1. Function Overloading
// 2. Operator Overloading

#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

    // FUNCTION OVERLOADING
    // You can make two functions with same name but you need to keep different parameters only then it is possible to create two functions with same name in the class
    void sayHello(){
        cout<<"Hello Ankit!!!"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

    // OPERATOR OVERLOADING
    void operator+(A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output is "<<value2-value1<<endl;
    }

    // Overloading the ()
    void operator() (){
        cout<<"Main bracket hoon!!! "<<this->a<<endl;
    }
};

int main(){

    A Obj;
    Obj.sayHello();
    // Obj.sayHello("Satyam");

    // Operator Overloading
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2;  //obj1 is 'this' waala object and obj2 is passed by reference to 'void operator+'
    obj1();    // Example 2 : '()' overloading

    return 0;
}