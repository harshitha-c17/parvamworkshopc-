#include<iostream>
using namespace std;

int main()
    //int arr[] = {1,2,3,4,5}
    //int arr[5]

    cout<<"Enter a size of array: ";
    int size;
    cin<<size; //3 --> 0 --->2
    int* ptr = new int[size];

    cout<<"Enter the elements of an array: ";
    for(int i = 0; i<size; i++){
        cin>>ptr[i];
    }

    cout<<"Elements: ";
    for(int i = 0; i<size; i++){
        cout<<ptr[i]<<" ";

    }
    cout