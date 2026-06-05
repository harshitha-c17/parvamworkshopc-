#include<iostream>
#include<string>
using namespace std;
//without fun temp
int maxInt(int a,int b){
    // ? :(ternary)
    return (a>b) ?a:b; //if else

}
double maxDouble(double a , double b){
    return (a>b)? a:b;//if else
}
//function template
template<typename T> //T --> any data type
T max(T a, T b){
    return (a>b)? a : b;
}

int main(){
    //max of two int num
    cout<< maxInt(30,10)<<endl;
    //max of two double num
    cout<<maxDouble(30.30,20.30)<<endl;
    //fun temp
    cout<<maxTwo(1,2)<<endl; // int
    cout<<maxTwo(20.50, 35.80)<<endl;
    cout<<maxTwo('hi','abc')<<endl;
}