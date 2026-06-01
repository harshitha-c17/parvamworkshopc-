#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }

};

class Dog: public virtual Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class cat: public virtual Animal{
    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};

class pet : public Dog, public cat{
    public:
    void play(){
        cout<<"playing"<<endl;
    }
};

int main(){
    pet p1;
    p1.eat();
    p1.eat();
    p1.bark();
    p1.meow();
    p1.play();
    return 0;
}