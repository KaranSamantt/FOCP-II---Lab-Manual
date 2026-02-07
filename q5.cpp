#include<iostream>

int main(){
    int num1, num2, temp;
    char choice;

    std::cout<<"Enter METHOD : \n1. Temporary variable(t)\n2. Addition & subtraction(a)\n3.Multiplication & division(m)\n";
    std::cin>>choice;

    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;

    std::cout<<"Numbers before swapping A = "<<num1<<std::endl<<"Numbers before swapping b = "<<num2;


    switch (choice){
        case 't' : temp = num1;
        num1 = num2;
        num2 = temp;
        std::cout<<"\nNumbers after swapping A = "<<num1<<std::endl<<"Numbers after swapping b = "<<num2;
        break;

        case 'a' : num1 = num1-num2;
        num2 = num1+num2;
        num1 = num2-num1;
        std::cout<<"\nNumbers after swapping A = "<<num1<<std::endl<<"Numbers after swapping b = "<<num2;
        break;

        case 'm' : 
        num1 = num1*num2;
        num2 = num1/num2;
        num1 = num1/num2;
        std::cout<<"\nNumbers after swapping A = "<<num1<<std::endl<<"Numbers after swapping b = "<<num2;
        break;


    }

    return 0;
}









// int num1, num2, temp;

// std::cout<<"Enter two numbers to swap : ";
// std::cin>>num1>>num2;

// std::cout<<"Numbers before swap A =  : "<<num1<<std::endl<<"Numbers before swap B =  : "<<num2;

// temp = num1;
// num1 = num2;
// num2 = temp;


// std::cout<<"\nNumbers after swap A =  : "<<num1<<std::endl<<"Numbers after swap B =  : "<<num2;
// return 0;