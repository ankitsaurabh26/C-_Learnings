#include<iostream>
using namespace std;

int main(){

    // 1D-Array
    // int *arr = new int[5];

    // 2D-Array
    // int **arr = new int*[5]; // Pointer to Pointer

    int r,c;
    cout<<"Enter row number : ";
    cin>>r;
    cout<<"Enter column number : ";
    cin>>c;

    int **arr = new int*[r];
    for (int i=0; i<r; i++){
        arr[i] = new int[c]; //arr[0] contain address of a dynamic array in the heap, so does a[1],a[2] and so on...
    } //CREATION DONE

    // TAKING INPUT
    cout<<"Enter the elements in the array : "<<endl;    
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The array is : "<<endl;
    // PRINTING OUTPUT
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // Release the memory
    for (int i=0; i<r; i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}