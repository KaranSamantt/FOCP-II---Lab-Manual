#include<iostream>

using namespace std;


class ElectricityBill{
    private:
    string consumerName;
	int units;
	float billAmount;

    public:
    ElectricityBill(){
        consumerName = "Not Assigned";
        units = 0;
        billAmount = 0;
    }

    ElectricityBill(string c, int u){
        consumerName = c;
        units = u;
    }

    void calculateBill(){
        if(units<=100){
            billAmount = units*5;
        }
        else if(units<=200){
            billAmount = (100*5) + (units - 100)*7;
        }
        else{
            billAmount = (100*5) + (100*7) + (units - 200)*10;
        }
    }

    void displayBill(){
        cout<<"Consumer name: "<<consumerName<<endl;
        cout<<"Units: "<<units<<endl;
        cout<<"Total bill amount: "<<billAmount<<endl;
    }
};


int main(){
    ElectricityBill e;
    ElectricityBill e1("Karan", 5);

    e.calculateBill();
    e1.calculateBill();

    e.displayBill();
    e1.displayBill();

    return 0;
}