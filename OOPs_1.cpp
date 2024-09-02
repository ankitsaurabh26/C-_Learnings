# include<iostream>
using namespace std;

// # include "Human.cpp"  : If you created the class in Human.cpp file


class Human  // By default access modifier is private
{
    // Properties
    private: // ye waale variables sirf class ke andar hi access kiye ja sakte hain
    char level;

    public:  // iske neeche ka ab sab variable public ho gaya -> class ke andar and class ke bahar both access
    int health = 80;
    int x;
    char grade;

    // PARAMETERISED CONSTRUCTOR
    Human(int x){
        cout<<"Address of this -> "<< this <<endl;
        this -> x = x;  // this is like self in Python
    }

};


using namespace std;

int main()
{
    // STATIC ALLOCATION
    cout<<"\n::: STATIC ALLOCATION :::\n"<<endl;

    Human Ramesh(5);

    Ramesh.grade = 'A';    

    cout<<"Health is : "<<Ramesh.health<<endl;
    cout<<"Grade is : "<<Ramesh.grade<<endl;
    cout<<"Address of Ramesh : "<<&Ramesh<<endl;
    cout<<"X = "<<Ramesh.x<<endl;

    // DYNAMIC ALLOCATION
    cout<<"\n::: DYNAMIC ALLOCATION :::\n"<<endl;

    Human *b = new Human(15);  // int *p = new int;

    cout<<b<<endl;  // b stores the address (pointer)
    cout<< "Health using (*b).health method = "<<(*b).health<<endl; // DEREFERENCING
    cout<< "Health using b->health method = "<< b->health <<endl; // DEREFERENCING

    b->grade = 'C';
    cout<< "Grade is "<< b->grade <<endl;


    return 0;
}