#include<iostream>

using namespace std;

int main(){
    int s1, s2, s3;

    cout<<"Enter three sides of triangle: ";
    cin>>s1>>s2>>s3;

    if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1)){
        if((s1==s2 && s2==s3)){
            cout<<"Its a equilateral triangle!";
        }
        else if((s1==s2) || (s2==s3) || (s1==s3)){
            cout<<"Isoceles triangle!";
        }
        else{
            cout<<"Scalene triangle!";
        }
    }
    else{
        cout<<"Invalid triangle!";
    }

    return 0;
}