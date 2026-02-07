#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, c, r, arm = 0;
    cout << "Enter a number: ";
    cin >> n;

    int original = n; /*SO WHAT HAPPENED AFTER THIS ARMSTRONG PROGRAM THE VALUE OF N GETS 0 SO I KEPT THE VALUE OF N*/
    // CHECKS FOR AN ARMSTRONG NUMBER:-
    c = n;

    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }

    if (c == arm)
    {
        cout << "Armstrong number!";
    }
    else
    {
        cout << "Not a armstrong number!";
    }

    //  CHECKS FOR A PERFECT NUMBER:-
    for (int i = 1; i < original; i++)
    {
        if (original % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == original)
    {
        cout << "\nPerfect number!";
    }
    else
    {
        cout << "\nNot a perfect number!";
    }

    return 0;
}

//  TO CHECK IF A NUMBER IS PERFECT OR NOT;
//  int n, sum = 0;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             sum= sum + i;
//         }
//     }

//     if(sum==n){
//         cout<<"Perfect number!";
//     }
//     else{
//         cout<<"Not a perfect number!";
//     }

// TO CHECK IF A NUMBER IS ARMSTRONG:
// int n, c, r, arm = 0;

// cout<<"Enter a number: ";
// cin>>n;

// c = n;

// while(n>0){
//     r = n%10;
//     arm = (r*r*r) + arm;
//     n = n/10;
// }

// if(c==arm){
//     cout<<"Armstrong number!";
// }
// else{
//     cout<<"Not a armstrong number!";
// }