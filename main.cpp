//Demonstrates inheritance between the class BankAccount
//and the class SavingAccount
#include <iostream>
#include <cmath>
#include "bank_account_class_funcs_construc.cxx"
using namespace std;

int main(){
    cout << endl;
    cout << "Welcome to Mebank systems!"<< endl;
    SavingsAccount account (1123.53, .9);
    cout << "Opening account balance ZAR_" << account.get_balance() << endl;
    cout << endl;

    account.deposit(11567.77);
    cout << "Avalable balance after deposit:_"<< account.get_balance() << endl;
    account.update();
    cout << endl;
    account.output(cout);
    cout << endl;

    account.withdraw(2011.65);
    cout << "Avalable balance after withdraw:_"<< account.get_balance() << endl;
    account.update();
    cout << endl;
    account.output(cout);
    cout << endl;

    return 0;
}
