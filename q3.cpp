#include<iostream>

int main(){
    int c;
    
    std::cout<<"Enter temperature in celsius : ";
    std::cin>>c;

    int temperature;
    temperature = (c*9/5) + 32;

    std::cout<<"The temperature in fahrenheit is "<<temperature;




    return 0;
}