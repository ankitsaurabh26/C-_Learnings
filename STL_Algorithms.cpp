#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<"Binary Search Finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;

    cout<<"Binary Search Finding 1 : "<<binary_search(v.begin(),v.end(),1)<<endl;
    
    cout<<"Lower Bound 3 : "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    // lower_bound finds the first position (index) where 9 could be inserted in the sorted vector v such that the vector remains sorted.
    
    cout<<"Upper Bound 3 : "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    // upper_bound finds the first position (index) where a value greater than 9 could be inserted in the sorted vector v such that the vector remains sorted.

    int a = 3;
    int b = 8;

    cout<<"Max of a,b : "<<max(a,b)<<endl;
    cout<<"Min of a,b : "<<min(a,b)<<endl;
    cout<<"Before swap a : "<<a<<" and b : "<<b<<endl;
    swap(a,b);
    cout<<"After swap a : "<<a<<" and b : "<<b<<endl;

    string abcd = "wxyz";
    reverse(abcd.begin(),abcd.end());
    cout<<"String wxyz is reversed to : "<<abcd<<endl;

    cout<<"Before rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(),v.begin()+2,v.end()); //rotate(v.begin(),kitna_rotate_karna_hai,v.end());

    cout<<"After rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end()); // Intro SORT = Quick sort+Heap sort+Insertion sort
    cout<<"After Sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}