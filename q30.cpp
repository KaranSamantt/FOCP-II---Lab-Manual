#include<iostream>

using namespace std;

int main(){
    int sal[10], total=0;
    float average;

    for(int i=0;i<10;i++){
        cout<<"Enter salary of employee "<<i+1<<" : ";
        cin>>sal[i];
    }


    for(int i=0;i<10;i++){
        total = total + sal[i];
    }

    average = total/10;

    cout<<"Total salary is "<<total<<endl;
    cout<<"Average salary is "<<average;



    return 0;
}