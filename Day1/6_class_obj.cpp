#include<iostream>
#include<string>
using namespace std;
//class--> class will not take any memory,it is just a blueprint
class employee{
    public:
    string name;
    int age;
    int id;

    //behaviour 
    void isSleeping(){
        cout <<name<<" is sleeping."<<endl;
    }
};
int main(){
    // object--> object wiil take a memory,it is an instance of a class
    employee e1,e2,e3;
    e2.name = "harshitha";
    e2.age = 24;
    e2.id = 456;
    //print values
    cout << "employee 2 details: "<<endl;
    cout<< "name:"<<e2.name<<endl;
    cout<< "age:"<<e2.age<<endl;
    cout<< "id:"<<e2.id<<endl;
    e2.isSleeping();

    return 0;

}; 

