#include<iostream>
using namespace std;


class Grandfather{
    public:
    void property(){
        cout<<"land"<<endl;
    }

};
class Father : public Grandfather{
    public:
        void business(){
            cout<<"shop"<<endl;

        }
};

class child:public Father{
    public:
    void study(){
        cout<<"school"<<endl;
    }
};
int main(){
    child childl;
    childl.property();//inherited from Grandfather
    childl.business();//inherited from father
    childl.study();//defined in child
    return 0;
}