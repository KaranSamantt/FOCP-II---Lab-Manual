#include<iostream>

using namespace std;

int main(){
    int arr[3][5];

    for(int i=0;i<3;i++){
        cout<<"Enter marks for student "<<i+1<<" :- "<<endl;
        for(int j=0;j<5;j++){
            cout<<"subject "<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }


    cout<<"Marks in second subject of first student: "<<arr[0][1]<<endl;
    cout<<"Marks in fifth subject of third student: "<<arr[2][4]<<endl;

    return 0;
}