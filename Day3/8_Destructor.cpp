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
    //dynamic way (manually call destructor using delete)
    Room room1("Room 1");  
    Room room2("Room 2");
    Room room3("Room 3");
    delete room3;
    delete room2;
    delete room1;
    return 0;
}