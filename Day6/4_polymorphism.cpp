#include<iostream>

using namespace std;

class animal{
    public:
       virtual void eat(){
            cout<<"Animal is eating"<<endl;
        }
};
class dog:public animal{
    public:
        void eat(){
            cout<<"Dog is eating"<<endl;
        }
};
class cat:public animal{
    public:
        void eat(){
            cout<<"Cat is eating"<<endl;
        }
};
int main(){
    dog d1;
    cat c1;
    animal *a1;
    a1=&d1;
    a1->eat();
    a1=&c1;
    a1->eat();
    return 0;
}