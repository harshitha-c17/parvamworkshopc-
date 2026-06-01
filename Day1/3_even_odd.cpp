#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number: ";//printf
    cin >> a; //scanf
    if(a%2==0){ //%2 == 0
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;

    }
    return 0;
}

