#include<iostream>
using namespace std;
//without using constructor
class student{
    public:
    string name;
    int age;

    Student(){
        this->name="unknown";
        this->age=0;
        cout <<"Default constructor called"<<endl;

    }
};

int main(){
    //random values(we can't predict theo/p)
    student s1; // it will call default constructor automatically
    cout << "name: "<<s1.name<<endl;
    cout << "age: "<<s1.age<<endl;
    return 0;
}