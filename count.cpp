#include<iostream>

using namespace std;

class Rectangle{
    int length;
    int width;
    static int count;
    public:
    Rectangle(){
        length = 0;
        width = 0;
        count++;
    }
    Rectangle(int l, int w){
        length = l;
        width = w;
        count++;
    }
    void display(){
        cout<<"\nLength = "<<length;
        cout<<"\nWidth = "<<width;
        cout<<"\nCount= "<<count;
    }
    friend void Area(Rectangle obj);
};

int Rectangle :: count;

void Area(Rectangle obj){
    cout<<"\nArea = "<<obj.length*obj.width;
}

int main(){
    Rectangle r1;
    r1.display();
    Rectangle r2(23,45);
    r2.display();
    Rectangle r3;
    r3.display();
    return 0;


}