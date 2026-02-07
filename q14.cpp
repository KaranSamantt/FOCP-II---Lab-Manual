#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    char choice;

    cout<<"(KARAN MADE CALCULATER) CHOOSE ONE: "<<endl<<"1. Addition (A)\n2. Subtraction (S)\n3. Multiplication (M)\n4. Divide (D)\n";
    cin>>choice;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;


    switch (choice){

        case 'A' : cout<<" "<<num1 + num2;
        break;
        case 'S' : cout<<" "<<num1 - num2;
        break;
        case 'M' : cout<<" "<<num1*num2;
        break;
        case 'D' : cout<<" "<<num1/num2;
        break;
        default : cout<<"Invalid choice!";
    }
    return 0;
}