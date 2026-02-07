#include<iostream>

int main(){
    int a, b, c;
    
    std::cout<<"Enter three numbers : ";
    std::cin>>a>>b>>c;

    int result;
    result = (a+b+c)/3;

    std::cout<<"The average is "<<result;




    return 0;
}