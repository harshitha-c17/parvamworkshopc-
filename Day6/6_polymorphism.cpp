#include<iostream>

using namespace std;

class animal{
    public:
       virtual void eat()final{
            cout<<"Animal is eating"<<endl;
        }
        virtual void walking(){
            cout<<"Animal is walking"<<endl;
        }
};
class dog:public animal{
    public:
        void eat() override{
            cout<<"Dog is eating"<<endl;
        }
        void walking() override{
            cout<<"Dog is walking"<<endl;
        }
};
int main(){
    dog d1;
    animal *a1;
    a1=&d1;
    a1->eat();
    a1->walking();
    return 0;
}