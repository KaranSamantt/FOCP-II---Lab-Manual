#include<iostream>

using namespace std;

int main(){
    int mark1, mark2, mark3, mark4, mark5, total;
    float percentage;
    cout<<"Enter marks in five subjects: "<<endl<<"FOCP : "<<endl<<"Maths: "<<endl<<"BME: "<<endl<<"Chemistry: "<<endl<<"PSDT: "<<endl;
    cin>>mark1>>mark2>>mark3>>mark4>>mark5;

    total = mark1+mark2+mark3+mark4+mark5;
    percentage = (total/500.0)*100;


    cout<<"Total marks of student is "<<total<<endl<<"and percentage is "<<percentage<<"%";
    return 0;
}