#include<iostream>
using namespace std;

class student{
     public:
    int* age;//pointer to int
    //para
    student (int age){
        this->age =new int;
        *(this->age) = age;

    //copy constructor
    Student(Student *other){
        cout<<"Copy con"<<endl;
        this->age=new int;
        *(this->age) = *(other->age);
    }

    }

};

int main(){
    student s1(24);
    cout<< "Age: "<< *(s1.age)<<endl; //24

    student s2(&s1);  // deep copy(copying the values)

    cout<<"Age: "<<*(s2.age)<<endl; //24

    //try to change the age of s1
    *(s1.age) = 30;
    cout<<"Age of s1: "<<*(s1.age)<<endl; //30
    cout<<"Age of s2: "<<*(s2.age)<<endl; //24
    return 0;

    
}