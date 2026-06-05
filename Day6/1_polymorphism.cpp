//without function overloading 
#include<iostream>
using namespace std;


//calculation

class calculation{
    public:
        int add_two_numbers(int a, int b){
            return a+b;

        }
        int add_three_numbers(int a,int b,int c){
            return a+b+c;
        }
};

int main(){
    calculation  c1;
    //addition of two numbers
    cout<<"Two numbers: "<<c1.add_two_numbers(10,20)<<endl;
    //addition of three numbers
    cout<<"Three numbers:"<<c1.add_three_numbers(10,20,30)<<endl;

    //addition of two double numbers

}