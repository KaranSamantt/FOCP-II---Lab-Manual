#include<iostream>

using namespace std;

int main(){
    int order, price, total;
    float discount;
    
    cout<<"Enter the amount of orders : ";
    cin>>order;
    cout<<"Enter the price of items: ";
    cin>>price;

    total = order*price;
    discount = 0.9*total;

    if(order>1000){
        cout<<"The total amount after 10% discount is "<<discount;
    }
    else{
        cout<<"The total amount is "<<total;
    }

    return 0;
}