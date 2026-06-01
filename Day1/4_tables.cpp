#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout << "Enter a number: ";//printf
    cin >> a; //scanf
    for(i=1;i<=10;i++){//5 * 1 = 5
        cout << a <<" * "<< i <<" = "<< (a*i) << endl;
        
    }
    return 0;
}