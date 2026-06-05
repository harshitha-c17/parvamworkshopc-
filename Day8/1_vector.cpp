#include<iostream>
#include<string>
#include<vector> //vector
using namespace std;

int main(){
    //integers
    vector<int>nums;//0

    //add element
    nums.push_back(10); //1-->1+1
    nums.push_back(20); //2-->2+2
    nums.push_back(30); //4-->4+4
    cout<<"size: "<<nums.size()<<endl;
    //2nd 
    cout<<"2n ele: "<<nums[1]<<endl;
    //capacity
    cout<<"capacity: "<<nums.capacity()<<endl;
    //for each
    for(int ele: nums){
        cout<<ele<<" ";

    }
    return 0;
}