#include<iostream>

using namespace std;

int main(){
    int a[3][3], b[3][3];

    cout<<"Enter elements for matrix A :-"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element for row "<<i+1<<" : "<<"column "<<j+1<<" : ";
            cin>>a[i][j];
        }
    }

    cout<<"Matrix A is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }


     cout<<"Enter elements for matrix B :-"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element for row "<<i+1<<" : "<<"column "<<j+1<<" : ";
            cin>>b[i][j];
        }
    }

    cout<<"Matrix B is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<b[i][j];
        }
        cout<<endl;
    }


    cout<<"The sum of matrix A & B are :- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j]+b[i][j];
        }
        cout<<endl;
    }



    return 0;
}