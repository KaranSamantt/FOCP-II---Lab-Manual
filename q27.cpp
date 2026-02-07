#include<iostream>

using namespace std;

int main(){
    int price[10];

    for(int i=0;i<10;i++){
        cout<<"Enter the price of item "<<i+1<<" : ";
        cin>>price[i];
    }

    int max = price[0];

    for(int i=1;i<10;i++){
        if(price[i]>max){
            max = price[i];
        }
    }

    cout<<"The maximum price is "<<max;



    return 0;
}