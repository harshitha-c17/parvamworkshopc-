#include<iostream>
#include<string>
using namespace std;
template<typename T>// T --> any data type
T addTwo(T a, T b){
    return a+b;
}
int main(){
    cout<<addTwo(10,20)<<endl; //int
    cout<<addTwo(20.30,20.30)<<endl;
    string str1="hello";
    string str2="world";
    //cout<<addTwo("hello","world")<<endl;  
    return 0;
}