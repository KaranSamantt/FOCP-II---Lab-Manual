#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);

    int iswords = 0;
    int isdigit = 0;
    int isspecial = 0;

    // 1:-
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            continue;
        }
        cout<<s[i];
        // 2:-
        for(int i=1;i<s.length();i++){
            s[0] = toupper(s[0]);
            s[i] = tolower(s[i]);
        }
        
    }
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            iswords++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            isdigit++;
        }
        else if(s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='&' || s[i]=='*'){
            isspecial++;
        }
    }
    cout<<"\nNumber of words: "<<iswords<<endl<<"Number of digits: "<<isdigit<<endl<<"Number of special characters: "<<isspecial;

    

    

return 0;
}