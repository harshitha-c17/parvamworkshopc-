#include<io.h>
using namespace std;

class BankAccount{
private:
    //private data member to store the balance of the account
    double balance;
public:
    //setter method to deposit money into the account 
    void deposit(double amount){
        //validate the deposit amount
        if( amount > 0) {
            balance = balance +  amouunt;
            cout << "Amount Deposited Successfully: " << endl;
        }
        else{
            cout << "Invalid Deposit Amount: " << amount << endl;

        }

    }
    //getter method to retrieve  the current balance of the amount
    double getBalance() const{
        return balance;
    }

};
int main(){
    //creating object of BankAccount class and using its methods to deposit money and check
    BankAccount account;
    account.deposit(1000);
    //getting balance after deposit
    cout << "current Balance: " << fixed <<account.getBalance() << endl;
    return 0;
}