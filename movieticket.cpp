#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    int ticketPrice;
    bool isBooked;

public:

  
    MovieTicket() {
        ticketPrice = 200;
        isBooked = false;
    }

   
    MovieTicket(string name, int seat, int price) {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }

   
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked successfully for " << movieName 
                 << " (Seat " << seatNumber << ")" << endl;
        } else {
            cout << "Seat " << seatNumber << " is already booked." << endl;
        }
    }

    
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket for seat " << seatNumber << " cancelled." << endl;
        } else {
            cout << "Ticket is not booked yet." << endl;
        }
    }

   
    void displayTicketDetails() {
        cout << "\nMovie Name : " << movieName << endl;
        cout << "Seat Number : " << seatNumber << endl;
        cout << "Ticket Price : " << ticketPrice << endl;
        cout << "Status : " << (isBooked ? "Booked" : "Available") << endl;
    }

 
    int calculateTotalCost(int numberOfTickets) {
        return numberOfTickets * ticketPrice;
    }
};

int main() {

    MovieTicket t1("Avengers", 12, 250);
    MovieTicket t2("Batman", 15, 220);

 
    t1.bookTicket();
    t2.bookTicket();

 
    t1.displayTicketDetails();
    t2.displayTicketDetails();

    t1.cancelTicket();


    t1.displayTicketDetails();

    
    cout << "\nTotal cost for 3 tickets of Batman: "
         << t2.calculateTotalCost(3) << endl;

    return 0;
}