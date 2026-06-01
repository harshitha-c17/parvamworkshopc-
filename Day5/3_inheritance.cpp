#include<iostream>
#include<string>
using namespace std;

class Father{
    public:
    int age = 40;
    void coding(){
        cout<<"coding"<<endl;
    }
};

class Mother{
    public:
    int age =30;
    void cooking(){
        cout<<"cooking"<<endl;
    }
};

class son:public Father,public Mother{
    public:
    void study(){
        cout<<"studying"<<endl;
    }
};

int main(){
    son s;
    s.coding();
    s.cooking();
    s.study();
    cout<<"Age: "<<s.Father::age<<endl;
    cout<<"Age: "<<s.Mother::age<<endl;
    return 0;
}