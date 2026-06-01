#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
        string name;
        void eat(){
            cout<<name<<" is eating ."<<endl;

        }
        void walk(){
            cout<<name<<" is walking."<<endl;

        }
};
class Dog:public Animal{
    public:
        void sleep(){
            cout<<name<<" is sleeping."<<endl;
        }
};

int main(){
    Dog dogl;
    dogl.name ="Dogl";//inherited from animal
    dogl.eat();//inherited from animal
    dogl.walk();
    dogl.sleep();//defined in dog(child)
    return 0;

}