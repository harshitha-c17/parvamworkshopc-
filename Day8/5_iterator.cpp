#include<iostream>
#include<string>
using namespace std;

int main(){
    //integers
    vector<int>nums;//0
    //add element
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    //we can use iterators in two way
    std::vector<int>::iterator it;
    for(it = nums.begin(); it!=nums.end(); it++){
        cout<<*it<<" ";
    }
    //new a way imp
    //c++ 11 auto(no need to mention the data type)
    for(auto it = nums.begin(); it!=nums.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
