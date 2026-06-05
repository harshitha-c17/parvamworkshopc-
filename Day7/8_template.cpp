#include<iostream>
#include<string>
using namespace std;
//class template / generic class
template<typename T, typename U>
class Student{
    public:
    T name;
    U age;
    Student(T n,U a): name(n), age(a) {
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student<string,int>  s1("harshitha",18);
    Student<double,bool> s2(20.45,true);//true-->1 false-->0
    s1.display();
    s2.display();

    return 0;
}