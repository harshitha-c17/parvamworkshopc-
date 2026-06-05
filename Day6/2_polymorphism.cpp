//without function overloading 
#include<iostream>
using namespace std;


class Calculation{
    public:
        int add(int a,int b){
            return a+b;
        }

        int add(int a,int b,int c){
            return a+b+c;
        
        }
        double add (double a,double b){
            return a+b;
        }
        double add 
    
};

int main(){
    Calculation c1;
    //addition of two numbers
    cout<<"Two numbers: " <<c1.add(10,20)<<endl;
    //addition of three numbers
    cout<<"Three numbers: "<<c1.add(10,20,30)<<endl;
    //addition of two double number
    cout<<"Double: "<<c1.add(10,20,30)<<endl;
    //addition of double and int
    cout<< "Double and int: "<<c1.add(20,30,40)<<endl;
    //cout<<c1.add(20,40,30)<<endl;//this will give error because
    //compiler

}