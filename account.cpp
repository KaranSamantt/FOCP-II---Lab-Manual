#include<iostream>

using namespace std;

class Account{
    int accountNumber;
    int balance;
    public:
    void displayAccount(){
        accountNumber = 7;
        balance = 281u;
        cout<<"\nAccount number: "<<accountNumber<<"\nBalance: "<<balance;
    }
};

class savingsAccount: public Account{
    int interestRate = 45;
    public:
    void CalculateInterest(){
        displayAccount();
        cout<<"\nInterest rate: "<<interestRate;
    }
};
int main(){
    savingsAccount s1;
    s1.CalculateInterest();

}