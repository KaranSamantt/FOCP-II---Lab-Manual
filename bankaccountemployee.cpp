#include <iostream>
using namespace std;


class BankAccount{
    string accountHolderName;int accountNumber;double balance;
    public:

    
    void inputDetails(){
        cout<<"\n Enter Account holder name, account number, balance: ";
        cin.ignore();
        getline(cin, accountHolderName);
        cin>>accountNumber>>balance;
    }
    void deposit(double amount){
        balance += amount;
        cout<<"\nAmount after deposited: "<<balance;
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"\nInsufficient balance!";
        }
        else{
            balance-=amount;
            cout<<"\nAmount after withdraw: "<<balance;
        }
    }
    void displayDetails(){
        cout<<"\nName : "<<accountHolderName;
        cout<<"\nAccount number: "<<accountNumber;
        cout<<"\nBalance : "<<balance;
    }
    };

class Employee{
    string name;int empId;double monthlySalary;
    public:

    
    void inputDetails(){
        cout<<"\n Name, empId, Montly salary : ";
        cin>>name>>empId>>monthlySalary;
    }
    double calculateAnnualSalary(){
        return (monthlySalary*12);
    }
    void displayDetails(){
        cout<<"\nName : "<<name;
        cout<<"\nempId: "<<empId;
        cout<<"\nMonthly salary : "<<monthlySalary;
        cout<<"\nAnnual salary: "<<calculateAnnualSalary();
    }
    };

int main()
{
    BankAccount a;
    Employee b;
    a.inputDetails();
    a.displayDetails();
    
    char choice;
    cout<<"\nD for deposit & W for withdraw: ";
    cin>>choice;
    if(choice=='D'){
        a.deposit(1200);
    }
    else {
        a.withdraw(1000);
    }

    b.inputDetails();
    b.displayDetails();
    return 0;
}
