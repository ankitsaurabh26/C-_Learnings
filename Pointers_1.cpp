#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<"num is : "<<num<<endl;
    cout<<"Address of num : "<<&num<<endl;

    // Pointer stores the address
    int *ptr = &num;
    cout<<"ptr contains : "<<ptr<<endl;
    cout<<"ptr dereferencing : "<<*ptr<<endl;

    cout<<"Size of integer num is "<<sizeof(num)<<endl;
    cout<<"Size of ptr pointer is "<<sizeof(ptr)<<endl;

    double d = 3.9;
    double *p = &d;
    cout<<"Size of double d is "<<sizeof(d)<<endl;
    cout<<"Size of p pointer is "<<sizeof(p)<<endl;

    int i=7;
    int *p2 = 0;
    // cout<<*p2<<endl; -> segmentation fault
    p2 = &i;
    cout<<"Address of i : "<<p2<<endl;

    // Copying a pointer
    int *q = p2;
    cout<<p2<<"-"<<q<<endl;
    cout<<*p2<<"-"<<*q<<endl;

    // Important
    int kit = 9;
    int *t = &kit;
    // cout<<(*t)++<<endl;
    *t = *t+1;
    cout<<*t<<endl;

    cout<<"t before incrementing "<<t<<endl;
    t = t+1;
    cout<<"t after incrementing "<<t<<endl;

    // Array
    int arr[5]={61,52,-13,-94,55};
    cout<<"Address of first memory block of the array : "<<arr<<endl;
    cout<<"*arr = "<<*arr<<endl;
    cout<<"*(arr+1) = "<<*(arr+1)<<endl;
    cout<<"*(arr)+1 = "<<*(arr)+1<<endl; //61+1 = 62

    // Remember: arr[i] = *(arr+i) which is same as i[arr] = *(i+arr)

    cout<<"i[arr] format : "<<2[arr]<<endl;

    // Important: CHAR ARRAY AND POINTERS
    char ch[6] = "abcde";
    cout<<"Unlike arr, ch here will not print the address instead it prints : "<<ch<<endl;
    // Because the cout function is differently implemented for int array and char array

    char *c = &ch[0];
    cout<<"char *c, printing c : "<<c<<endl; //cout tab tak print karna nahi band karega jab tak usko '\0'(null character) nahi milta    

    return 0;
}