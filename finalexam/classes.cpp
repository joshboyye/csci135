#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:
    string name;
    int balance;

    void withdraw(int amount){
        balance = balance - amount;
    }
    void print(){
        cout << name << "has " << balance << "dollar" << endl;
    }
};

int main(){
    BankAccount account1;
    account1.name = "John";
    account1.balance = 1000;

    // cout << account1.name << " has " << account1.balance << " dollars." << endl;
    account1.print();


    BankAccount account2;
    account2.name = "Kevin";
    account2.balance = 2000;

    account2.print();
    account2.withdraw(200);
    account2.print();


    return 0;
}