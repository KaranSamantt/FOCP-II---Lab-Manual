#include<iostream>

using namespace std;

int main(){
    int s1, s2, s3;

    cout<<"Enter score of player 1: ";
    cin>>s1;
    cout<<"Enter score of player 2: ";
    cin>>s2;
    cout<<"Enter score of player 3: ";
    cin>>s3;


    if(s1>s2 && s1>s3){
        cout<<"Player 1 is ahead of both players";
    }
    else if(s2>s1 && s2>s3){
        cout<<"Player 2 is ahead of both players";
    }
    else if(s3>s1 && s3>s2){
        cout<<"Player 3 is ahead of both players";
    }
    else{
        cout<<"All players have equal score!";
    }


    return 0;
}