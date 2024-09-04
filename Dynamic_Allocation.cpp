#include<iostream>
using namespace std;
// MEMORY : WE NEED TO MANUALLY RELEASE

int getsum(int arr[],int n){        //can also use : int getsum(int *arr,int n)
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int *i = new int;
    cout<<"'i' will hold an address of heap : "<<i<<endl;
    // Although pointer 'i' is created inside stack memory

    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter the array elements one by one"<<endl;
    int *arr = new int[n]; //Dynamic array
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }

    int ans = getsum(arr,n);
    cout<<"Sum is : "<<ans<<endl;

    // Releasing memory
    delete i;
    delete []arr;

    return 0;
}