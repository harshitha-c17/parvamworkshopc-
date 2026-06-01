#include<iostream>
using namespace std;
//---------------------------------------
// FRIEND FUNCTION
// Definition:
// friend function can access private members
// of another class.
// -----------------------------------------
class BankAccount{
private:
    //private member
    double balance;
public:
    //constructor
    BankAccount(double b){
        balance = b;

    }
    // Friend function declaration
    friend void displayBalance(BankAccount account);
};
//------------------------------------------------------------
// Friend function 
//defined outside class
// Can access private members balance
//-------------------------------------
void displayBalance(BankAccount acc){
    //Accessing private member balance of BankAccount class
    cout << "Current Balance: " << acc.balance << endl;
}

int main(){
    // Creating object 
    BankAccount b1(5000);
    // Calling friend function 
    displayBalance(b1);
    return 0;
}

