#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    bool valid = true;

    cout<<"Enter a username: ";
    getline(cin, name);

    for(char ch : name){
        if(ch==' ' || ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='&' || ch=='*'){
            valid = false;
            break;
        }
    }    


    if(valid){
        cout<<"Accepted!"<<endl;
    }
    else{
        cout<<"Not accepted!"<<endl;
    }


    return 0;
}