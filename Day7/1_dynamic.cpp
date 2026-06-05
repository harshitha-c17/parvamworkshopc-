//new and delete
#include<iostream>
using namespace std;

int main(){
    //stack-->variable
    int a = 10;
    cout<<"a: "<<a<<endl;

    //heap
    int*ptr = new int;
    *ptr =30;
    cout<<"ptr :"<<*ptr<<endl;

    delete ptr;
    ptr = nullptr; //important to avoid dangling pointer
    return 0;
}