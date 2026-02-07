#include<iostream>

using namespace std;

int main(){
    int arr[5], even=0, odd=0;

    for(int i=0;i<5;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even = even+arr[i];
        }
        else{
            odd = odd+arr[i];
        }
    }


    cout<<"The sum of even is "<<even<<endl<<"The sum of odd is "<<odd;

    return 0;
}