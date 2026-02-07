#include<iostream>

using namespace std;
int main(){
    int emp;
    float sal, bonus, net; 
    
    cout<<"Enter no. of employees : ";
    cin>>emp;

    for(int i=1;i<=emp;i++){
        
        cout<<"Enter basic salary of employee "<<i<<" : ";
        cin>>sal;

        bonus = sal*0.12;
        net = sal + bonus;

        cout<<"Bonus : "<<bonus<<endl;
        cout<<"Net salary: "<<sal<<endl;
    }


    return 0;
}