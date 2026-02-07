#include<iostream>

int main(){
    int itemno, quantity, total;
    float discount, unitprice; 
    
    std::cout<<"Enter item no : ";
    std::cin>>itemno;
    std::cout<<"Enter quantity : ";
    std::cin>>quantity;
    std::cout<<"Enter unit price : ";
    std::cin>>unitprice;

    total = quantity*unitprice;
    discount = 0.8*total;
    std::cout<<"The total amount before discount is "<<total<<std::endl<<"After 20% discount: "<<discount;




    return 0;
}