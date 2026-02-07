#include<iostream>

using namespace std;

int main(){
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if((year%400==0) || (year%4==0 && year%100!=0)){
        cout<<"Its a leap year!";
    }
    else{
        cout<<"No, its not a leap year!";
    }


    return 0;
}