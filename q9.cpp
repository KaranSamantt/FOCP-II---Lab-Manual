#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Enter a letter : ";
    cin>>ch;

    if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
    ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout<<"Its a vowel!";
    }
    else if(ch>= '0' && ch<='9'){
        cout<<"Its a number!";
    }
    else{
        cout<<"Its a consonant!";
    }

    return 0;
}