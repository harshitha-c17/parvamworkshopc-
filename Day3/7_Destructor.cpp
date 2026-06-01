#include<iostream>
#include<string>
using namespace std;

class Room{
    public:
    string name;
    //constructor
    Room(string name): name(name){
        cout<< "Room created: "<< name<<endl;
    }
    //destructor
    ~Room(){
        cout<< "Room destroyed: "<< name<<endl;
      
    }
};

int main(){
    //static way (will call destructor automatically when goint out of scope)
    Room room1("Room 1");  
    Room room2("Room 2");
    Room room3("Room 3");
    return 0;
}
