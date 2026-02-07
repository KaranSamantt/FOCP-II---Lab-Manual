#include<iostream>

using namespace std;

int main(){
    int temp[10];

    for(int i=0;i<10;i++){
        cout<<"Enter temperature of day "<<i+1<<" : ";
        cin>>temp[i];
    }

    int max = temp[0];


    for(int i=1;i<10;i++){
        if(temp[i]>max){
            max = temp[i];
        }
    }


    cout<<"Maximum temperature is "<<max;



    return 0;
}