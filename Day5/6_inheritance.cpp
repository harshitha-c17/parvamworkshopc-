#include<iostream>
#include<string>
using namespace std;


class Grandfather{
    public:
    void property(){
        cout<<"land"<<endl;
    }
    GrandFather(){
        cout<<"GrandFather constructor"<<endl;
    }
    GrandFather(){
        cout<<"GrandFather destructor"<<endl;
    }

};
class Father : public Grandfather{
    public:
        void business(){
            cout<<"shop"<<endl;

        }
        Father(){
            cout<<"Father constructor"<<endl;
        }
        Father(){
            cout<<"Father destructor"<<endl;
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

