#include<iostream>

using namespace std;

int main(){
    int m, n, p, q;

    cout<<"Enter rows and columns for matrix A :-"<<endl;
    cin>>m>>n;

    cout<<"Enter rows and columns for matrix B :-"<<endl;
    cin>>p>>q;

    if(n!=p){
        cout<<"Matrix multiplication not possible.";
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];

    cout<<"Enter elements for matrix A:- "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element for row "<<i+1<<" : "<<"column "<<j+1<<" : ";
            cin>>a[i][j];
        }
    }

     cout<<"Enter elements for matrix B :-"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"Enter element for row "<<i+1<<" : "<<"column "<<j+1<<" : ";
            cin>>b[i][j];
        }
    }

  
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j] = 0;
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }


    cout<<"The multiply of matrix A and B is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}