#include <iostream>
using namespace std;


class Rechtangle{
    float length,width;
    float calculateArea(){
        return (length*width);}
    float calculatePerimeter(){
    return (2*(length+width));}
    public:

    
    void inputDimensions(){
        cout<<"\n Enter length & width: ";
        cin>>length>>width;
    }
    void displayResult(){
       cout<<"\nArea: "<<calculateArea();
       cout<<"\nPerimeter: "<<calculatePerimeter();
    }
    };

int main()
{
    Rechtangle a;
    a.inputDimensions();
    a.displayResult();
   
    return 0;
}
