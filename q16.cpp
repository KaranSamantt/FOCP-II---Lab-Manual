#include<iostream>

using namespace std;

int main(){
    int n;
    bool isprime = true;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<2){
        isprime = 0;;
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime = false;
        }
        else{
            isprime = true;
        }

    }

    if(isprime){
        cout<<"Prime number!";
    }
    else{
        cout<<"Not a Prime number!";
    }


    return 0;
}