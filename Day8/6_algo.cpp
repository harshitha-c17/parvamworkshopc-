#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums ={5,2,8,1,3}

    //sort
    sort(nums.begin(), nums.end());

    for(int ele: nums){
        cout<<ele<<" "; //1 2 3 5 8

    }
    bool exist = binary_search(nums.begin(), nums.end(), 3);
    if(exist){
}