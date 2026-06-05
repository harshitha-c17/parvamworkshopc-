#include<iostream>
#include<fstream>
using namespace std;
#include<string>

int main(){
    cout<<"Starting"<<endl;
    //open
    cout<<"opening a file"<<endl;
    try
    {
        ifstream readFile("helo.txt");
        if(!readFile){
            throw "File not found";

        }

        string line;
        //read
        cout<<"reading data: "<<endl;
        while(getline(readFile,line)){
            cout<<line<<endl;
        }
        cout<<"Closing a file"<<endl;
        //close
        readFile.close();
    }
    catch(const char*msg)
    {
        cerr << msg  <<endl;
    }

    cout<<"ending"<<endl;
}
