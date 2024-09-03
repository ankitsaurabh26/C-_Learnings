#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main(){
    int basic[3] = {2,1,7};

    // 1. ARRAY
    array<int,4> a = {1,2,3,4}; //Static array same as above

    for(auto i: a){
        cout<<i<<" ";
    }cout<<endl;


    // 2. VECTOR -> Dynamic Allocation
    cout<<"::: VECTOR :::"<<endl;

    vector<int> v;

    vector<int> b(5,3); // a(size, initialize all with 3) -> in default case it initialize with 0

    vector<int> last(b); // Vector last is created with all elements of b

    cout<<"Vector Capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Vector Capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Vector Capacity : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Vector Capacity : "<<v.capacity()<<endl;
    cout<<"Vector Size : "<<v.size()<<endl;
    cout<<"Vector element at 2nd Index : "<<v.at(2)<<endl;
    cout<<"Vector Front : "<<v.front()<<endl;
    cout<<"Vector Back : "<<v.back()<<endl;

    cout<<"Vector Before Pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"Vector After Pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    // 3. DEQUE
    cout<<"::: DEQUE :::"<<endl;

    deque<int> d;

    d.push_back(13);
    d.push_front(12);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();
    // d.pop_front();

    cout<<"Deque print first index element : "<<d.at(1)<<endl;
    cout<<"Deque Front : "<<d.front()<<endl;
    cout<<"Deque Back : "<<d.back()<<endl;
    cout<<"Empty or Not : "<<d.empty()<<endl;

    cout<<"Before Erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // erase takes range : from where to where it should erase
    cout<<"After Erase "<<d.size()<<endl;

    // 4. LIST
    cout<<"::: DOUBLY LINKED LIST :::"<<endl;

    list<int> new_l(5,100);

    for(int i:new_l){
        cout<<i<<" ";
    }cout<<endl;

    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    
    l.erase(l.begin());
    cout<<"List After Erase"<<endl;
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Size of list : "<<l.size()<<endl;

    // 5. STACK
    cout<<"::: STACK :::"<<endl;

    stack<string> s;
    s.push("Ankit");
    s.push("Kumar");
    s.push("Saurabh");

    cout<<"Top element : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element : "<<s.top()<<endl;
    cout<<"Size of stack : "<<s.size()<<endl;
    cout<<"Empty or Not : "<<s.empty()<<endl;

    // 6. QUEUE
    cout<<"::: QUEUE :::"<<endl;

    queue<string> q;

    q.push("Harkirat");
    q.push("Kumar");
    q.push("Singh");

    cout<<"Size before pop : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;
    q.pop();
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Size after pop : "<<q.size()<<endl;

    // 7. PRIORITY QUEUE
    cout<<"::: PRIORITY QUEUE :::"<<endl;
    priority_queue<int> maxi; // MAX HEAP

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini;

    cout<<"MAX HEAP"<<endl;
    maxi.push(3);
    maxi.push(1);
    maxi.push(0);
    maxi.push(8);

    int n = maxi.size();
    for (int i=0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"MIN HEAP"<<endl;
    mini.push(2);
    mini.push(7);
    mini.push(5);
    mini.push(9);

    int m = mini.size();
    for (int i=0; i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    // 8. SET (Internal Implementation Using BST)
    cout<<"::: SET :::"<<endl;
    // You cannot modify element after adding it into set : Either you put or delete
    // Elements are returned in sorted order
    // Set is slower than Unordered Set, In unordered set elements are returned in random order
    
    set<int> my_set;

    my_set.insert(6);
    my_set.insert(1);
    my_set.insert(6);
    my_set.insert(5);
    my_set.insert(0);
    my_set.insert(0);
    my_set.insert(0);

    for(auto i : my_set){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = my_set.begin();
    it++;

    my_set.erase(it);

    cout<<"After Erase"<<endl;
    for(auto i : my_set){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not : "<<my_set.count(5)<<endl;

    set<int>::iterator itr = my_set.find(5);
    cout<<"Value present at itr : "<< *itr<<endl;

    for(auto k=itr; k!=my_set.end();k++){
        cout<<*k<<" ";
    }cout<<endl;

    // 9. MAP -> implementation : Red Black tree or Balanced tree (O(logn))
    // In unordered map(implementation : hashmap -> O(1)) sequence will be random but in map it is sorted in order.
    cout<<"::: MAP :::"<<endl;
    map<int,string> mn;
    mn[1] = "Kant";
    mn[2] = "Rohan";
    mn[3] = "Bank";

    for(auto i:mn){
        cout<<i.first<<" ";
    }cout<<endl;

    mn.insert({6,"Bheem"});

    cout<<"Before erase"<<endl;
    for(auto i:mn){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"Finding 2 present or not : "<<mn.count(2)<<endl;
    
    mn.erase(2); //mn.erase(key)
    cout<<"After erase"<<endl;
    for(auto i:mn){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto iti = mn.find(3);

    for(auto i = iti; i!=mn.end();i++){
       cout<<(*i).first<<":"<<i->second<<endl;
    }

}