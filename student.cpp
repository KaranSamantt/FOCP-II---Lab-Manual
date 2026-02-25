#include <iostream>
using namespace std;


class student{
    int rollno;string name;int marks1, marks2, marks3;
    int calculateTotal(){
        return (marks1+marks2+marks3);}
    public:

    
    void inputDetails(){
        cout<<"\n Enter rollno, name, marks1, marks2, marks3 : ";
        cin>>rollno>>name>>marks1>>marks2>>marks3;
    }
    void displayDetails(){
        cout<<"\nName : "<<name<<"\nRoll no. "<<rollno;
        cout<<"\nMarks 1: "<<marks1<<"\nMarks 2: "<<marks2<<"\nMarks 3: "<<marks3;
        cout<<"\nTotal : "<<calculateTotal();
    }
    };

int main()
{
    student s1, s2;
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();
   
    return 0;
}
