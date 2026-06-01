#include<iostream>
using namespace std;

class Point{
    public:
        int x;
        //initialization list (fast)
        point(int abc) : x(abc) { 
            cout<< "Constructor called! and value of x is: "<<x<<endl;

        }            
        
};

int main(){
    point p1(10);
    cout << "Value of x: " << p1.x <<endl;
    return 0;
}