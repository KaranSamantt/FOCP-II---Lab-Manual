#include<iostream>

using namespace std;

int main(){
    int n, r, c, s=0;
    cout<<"Enter id number: ";
    cin>>n;
    
    c = n;

    while(n>0){
        r = n%10;
        s = r+(s*10);
        n = n/10;
    }

    if(c==s){
        cout<<"Its a palindrome!";
    }
    else{
        cout<<"Not a palindrome!";
    }

    return 0;
}