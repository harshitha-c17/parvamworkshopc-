#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Starting program "<<endl;
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0){
            throw "Divide by zero error";
        }
        else{
            int res=a/b;
            cout<<"Result:"<<res<<endl;

        }   
    }catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    cout<<"Program completed!"<<endl;
    return 0;

}