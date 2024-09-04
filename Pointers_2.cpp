#include<iostream>
using namespace std;

// FUNCTION AND POINTERS

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p = p+1;
    cout<<"Inside "<<p<<endl;
}
void value_update(int *p){
    *p = *p+1;
}

int main(){

    int value = 5;
    int *p = &value;
    print(p);

    cout<<"Before "<<p<<endl;
    update(p);
    cout<<"After "<<p<<endl;

    cout<<"value before : "<<value<<endl;
    value_update(p);
    cout<<"value after : "<<value<<endl;

    return 0;
}