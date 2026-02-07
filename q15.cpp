#include<iostream>


using namespace std;

int main(){
    int n, num, maxnum;

    cout<<"Enter how many numbers: ";
    cin>>n;

    cout<<"Enter number 1: ";
    cin>>num;
    maxnum = num;

    for(int i=2;i<=n;i++){
        cout<<"Enter number "<<i<<" : ";
        cin>>num;

        if(num>maxnum){
            maxnum = num;
        }
    }

    cout<<"The largest number is "<<maxnum;


    return 0;
}