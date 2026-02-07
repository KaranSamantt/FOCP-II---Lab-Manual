#include<iostream>

using namespace std;

int main(){
    int start, end, j, i;

    cout<<"Enter a range from starting to end: ";
    cin>>start>>end;

    for(i=start;i<=end;i++){
        for(j = 2;j<=i;j++){
            if(i%j==0)
                break;
            }
            if(i==j)
                cout<<" "<<j;
}

    return 0;
}