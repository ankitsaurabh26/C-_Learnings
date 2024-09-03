#include<iostream>
#include<vector>
using namespace std;

class Hero{
    public:
    static int timeToComplete; // You don't need to create an object to aceess this

    // STATIC FUNCTION
    static int func(){
        return timeToComplete;
    }
};

// STATIC
int Hero::timeToComplete = 95;

// const function
int Test (const int num)  
{  
// if we change the value of the const argument, it thwrows an error.  
// num = num + 10;  
cout << "The value of num: " << num << endl;  
return 0;  
}  

int main(){

    vector<int>vec = {1,2,3,4,5};

    // AUTO
    for(auto i:vec){
        cout<<i<<" ";
    }

    cout<<"\nAccessing the static member : "<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<"Static member through object creation : "<<a.timeToComplete<<endl;

    cout<<"Static functions can only access static variables"<<endl;
    cout<<Hero::func()<<endl;

    // CONST => const keyword makes a variable read-only 
    Test(7);

    return 0;
}