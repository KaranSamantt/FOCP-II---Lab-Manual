#include<iostream>

using namespace std;

class Rectangle{
    int length;
    int width;
    public:
    Rectangle(){
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w){
        length = l;
        width = w;
    }
    void display(){
        cout<<"\nLength = "<<length;
        cout<<"\nWidth = "<<width;
    }
    friend void Area(Rectangle obj);
};

void Area(Rectangle obj){
    cout<<"\nArea = "<<obj.length*obj.width;
}

int main(){
    Rectangle r1, r2(23,45);
    r1.display();
    Area(r1);
    r2.display();
    Area(r2);
    return 0;


}

// #include<iostream>

// using namespace std;

// class karan;
// class keshav;
// class rishab{
//     private:
//     int money = 250;
//     friend void keshav(rishab, karan);
// };

// class karan{
//     private:
//     int money = 250;
//     friend void keshav(rishab, karan);
// };

// void keshav(rishab r1,karan r2){
//     cout<<"sum: "<<r1.money+r2.money;
// }
// int main(){
//     rishab obj1; karan obj2;
//     keshav(obj1, obj2);
// }