#include<iostream>
#include<cstring>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string n, int a) : name(n), age(a) {
    }

    
};
int main(){
    student s1("harshitha",18);
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    student* s2 = new student("harshitha",18);
    cout<<"Name: "<<s2->name<<endl;
    cout<<"Age: "<<s2->age<<endl;
    return 0;
}