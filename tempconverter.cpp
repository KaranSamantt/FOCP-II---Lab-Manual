#include <iostream>
using namespace std;


class Temperature{
    float celsius;
    float convertToFahrenheit(){
        return (celsius*9/5)+32;
    }
    public:
    
    
    void inputTemperature(){
        cout<<"\n Enter Temperature in celsius : ";
        cin>>celsius;
    }
    void displayResult(){
        cout<<"\nTemperature in fahrenheit is: "<<convertToFahrenheit();
    }
    };

int main()
{
    Temperature t;
    t.inputTemperature();
    t.displayResult();
   
    return 0;
}
