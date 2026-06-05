#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){
    list<string>names;
    //store values
    names.push_back("mohan");
    names.push_back("murali")
    //size
    cout<<"size: "<<names.size()<<endl;
    //traverse -for each
    for(string ele :name){
        cout<< ele<<" ";

    }
    cout<<endl;
    //remove last ele
    names.pop_back();
    //traverse - for each
    for(string ele: names){
        cout<< ele<<" ";
    
    }
    
}
