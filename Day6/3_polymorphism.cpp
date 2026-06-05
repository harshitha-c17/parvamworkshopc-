#include<iostream>
#include<string>
using namespace std;

class Complex{
    public:
        double real;
        double imag;
        //para
        Complex(double r=0,double i=0):real(r),imag(i) {
        
           
    }

    Complex operator+(Complex c){
        return Complex(real+c.real,imag+c.imag);
    }
};
int main(){
    Complex c1(20,10), c2(20,40);
    cout<<c1.real<<"+"<<c1.imag<<"i"<<endl;
    cout<<c2.real<<"+"<<c2.imag<<"i"<<endl;
    Complex c3=c1+c2;
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
    return 0;
}
