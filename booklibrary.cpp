#include <iostream>
using namespace std;


class Book{
    string title, author;double price;
    public:

    
    void inputDetails(){
        cout<<"\n Enter Title, author & price : ";
        cin>>title>>author>>price;
    }
    void displayDetails(){
        cout<<"\nTitle: "<<title;
        cout<<"\nAuthor: "<<author;
        cout<<"\nPrice: "<<price;
    }
    };

int main()
{
    Book b;
    b.inputDetails();
    b.displayDetails();
   
    return 0;
}
