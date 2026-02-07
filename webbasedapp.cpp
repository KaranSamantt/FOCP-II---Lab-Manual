#include<iostream>
#include<string>

using namespace std;

int main(){
    string pass;
    cout<<"Enter a password: ";
    cin>>pass;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;


    for(char ch : pass){
        if(ch>='A' && ch<='Z')hasUpper = true;
        if(ch>='a' && ch<='z')hasLower = true;
        if(ch>='0' && ch<='9')hasDigit = true;
        if(ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '!' || ch == '&' || ch == '*'){
            hasSpecial = true;
        }
    }

    if(hasUpper && hasLower && hasDigit && hasSpecial){
        cout<<"Password is valid!";
    }
    else{
        cout<<"Please enter a password which contains uppercase, lowercase, digit & special character!";
    }


    return 0;
}