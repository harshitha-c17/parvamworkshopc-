#include<iostream>
using namespace std;
//without using constructor
class student{
    string name;
    int age;
    //para con
    Student(string name,int age){
        this->name= name;
        this->age=age;
        cout <<"para"<<end1;
        
        }
        //default 
        student(){
            this->name="unknown";
            this->age=0;
            cout <<"Default"<<endl;
        }
};

int main(){
    student s1("harshitha",18);//para
    cout << "name: "<<s1.name<<endl;
    cout << "age: "<<s1.age<<endl;
    
    //default
    student s2;
    cout << "name: "<<endl;
    cout << "age: "<<endl;
    
}