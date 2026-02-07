#include<iostream>

using namespace std;

int main(){
    int arr[5], count=0;

    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }


    for(int i=0;i<5;i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            count++;
        }
    }


    cout<<"Numbers divisible by both 3 and 5 is "<<count;




    return 0;
}