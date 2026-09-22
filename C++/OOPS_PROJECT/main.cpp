#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Base Class: Room (Demonstrates Abstraction and Encapsulation)
class Room {
protected:
    int roomNumber;
    double pricePerDay;
    bool isBooked;
    string customerName;
    int stayDays;

public:
    Room(int rNo, double price) : roomNumber(rNo), pricePerDay(price), isBooked(false), customerName("N/A"), stayDays(0) {}

    virtual ~Room() {}

    // Encapsulation: Public Getters and Setters
    int getRoomNumber() const { return roomNumber; }
    double getPricePerDay() const { return pricePerDay; }
    bool getBookingStatus() const { return isBooked; }
    string getCustomerName() const { return customerName; }

    void bookRoom(string name, int days) {
        customerName = name;
        stayDays = days;
        isBooked = true;
    }

    void cancelBooking() {
        customerName = "N/A";
        stayDays = 0;
        isBooked = false;
    }

    // Polymorphism: Virtual functions to be overridden
    virtual string getRoomType() const = 0; // Pure virtual function
    
    virtual void displayRoomDetails() const {
        cout << left << setw(10) << roomNumber 
             << setw(15) << getRoomType() 
             << setw(10) << fixed << setprecision(2) << pricePerDay 
             << setw(12) << (isBooked ? "Booked" : "Available") 
             << setw(20) << customerName << endl;
    }

    virtual double calculateBill() const {
        return pricePerDay * stayDays;
    }
};

// Derived Class 1: StandardRoom (Demonstrates Inheritance)
class StandardRoom : public Room {
public:
    StandardRoom(int rNo) : Room(rNo, 1000.0) {} // Standard price 1000

    string getRoomType() const override {
        return "Standard";
    }

    // Function Overriding
    void displayRoomDetails() const override {
        Room::displayRoomDetails();
    }
};

// Derived Class 2: DeluxeRoom
class DeluxeRoom : public Room {
public:
    DeluxeRoom(int rNo) : Room(rNo, 2500.0) {} // Deluxe price 2500

    string getRoomType() const override {
        return "Deluxe";
    }

    void displayRoomDetails() const override {
        Room::displayRoomDetails();
    }
};

// Derived Class 3: SuiteRoom
class SuiteRoom : public Room {
public:
    SuiteRoom(int rNo) : Room(rNo, 5000.0) {} // Suite price 5000

    string getRoomType() const override {
        return "Suite";
    }

    void displayRoomDetails() const override {
        Room::displayRoomDetails();
    }
    
    // Suite might have special bill factor
    double calculateBill() const override {
        return (pricePerDay * stayDays) * 1.1; // 10% luxury tax
    }
};

// HotelManager Class: To handle internal logic (Abstraction)
class HotelManager {
private:
    static const int MAX_ROOMS = 10;
    Room* rooms[MAX_ROOMS];

public:
    HotelManager() {
        // Initialize rooms (Mix of Standard, Deluxe, Suite)
        rooms[0] = new StandardRoom(101);
        rooms[1] = new StandardRoom(102);
        rooms[2] = new StandardRoom(103);
        rooms[3] = new DeluxeRoom(201);
        rooms[4] = new DeluxeRoom(202);
        rooms[5] = new DeluxeRoom(203);
        rooms[6] = new SuiteRoom(301);
        rooms[7] = new SuiteRoom(302);
        rooms[8] = new SuiteRoom(303);
        rooms[9] = new SuiteRoom(304);
    }

    ~HotelManager() {
        for (int i = 0; i < MAX_ROOMS; ++i) {
            delete rooms[i];
        }
    }

    void displayAllRooms() {
        cout << "\n------------------------------------------------------------\n";
        cout << left << setw(10) << "Room No" << setw(15) << "Type" << setw(10) << "Price" << setw(12) << "Status" << setw(20) << "Customer" << endl;
        cout << "------------------------------------------------------------\n";
        for (int i = 0; i < MAX_ROOMS; ++i) {
            rooms[i]->displayRoomDetails();
        }
        cout << "------------------------------------------------------------\n";
    }

    void bookRoom() {
        int rNo;
        string name;
        int days;
        cout << "\nEnter Room Number to Book: ";
        cin >> rNo;

        for (int i = 0; i < MAX_ROOMS; ++i) {
            if (rooms[i]->getRoomNumber() == rNo) {
                if (rooms[i]->getBookingStatus()) {
                    cout << "Error: Room already booked!\n";
                    return;
                }
                cout << "Enter Customer Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Number of Days: ";
                cin >> days;

                if (days <= 0) {
                    cout << "Invalid number of days!\n";
                    return;
                }

                rooms[i]->bookRoom(name, days);
                cout << "Room " << rNo << " booked successfully for " << name << ".\n";
                cout << "Estimated Bill: " << rooms[i]->calculateBill() << " (incl. taxes if any)\n";
                return;
            }
        }
        cout << "Error: Room " << rNo << " not found.\n";
    }

    void cancelBooking() {
        int rNo;
        cout << "\nEnter Room Number to Cancel Booking: ";
        cin >> rNo;

        for (int i = 0; i < MAX_ROOMS; ++i) {
            if (rooms[i]->getRoomNumber() == rNo) {
                if (!rooms[i]->getBookingStatus()) {
                    cout << "Error: Room is not booked.\n";
                    return;
                }
                rooms[i]->cancelBooking();
                cout << "Booking for Room " << rNo << " has been cancelled.\n";
                return;
            }
        }
        cout << "Error: Room " << rNo << " not found.\n";
    }

    void searchByType() {
        int typeChoice;
        cout << "\nSelect Room Type to Search:\n1. Standard\n2. Deluxe\n3. Suite\nChoice: ";
        cin >> typeChoice;

        string targetType = (typeChoice == 1) ? "Standard" : (typeChoice == 2) ? "Deluxe" : (typeChoice == 3) ? "Suite" : "";
        
        if (targetType == "") {
            cout << "Invalid Selection.\n";
            return;
        }

        cout << "\nAvailable " << targetType << " Rooms:\n";
        bool found = false;
        for (int i = 0; i < MAX_ROOMS; ++i) {
            if (rooms[i]->getRoomType() == targetType && !rooms[i]->getBookingStatus()) {
                rooms[i]->displayRoomDetails();
                found = true;
            }
        }
        if (!found) cout << "No available rooms of this type.\n";
    }

    void viewBookingRecords() {
        cout << "\n--- Current Booking Records ---\n";
        bool any = false;
        cout << left << setw(10) << "Room No" << setw(15) << "Type" << setw(20) << "Customer Name" << "Total Bill\n";
        for (int i = 0; i < MAX_ROOMS; ++i) {
            if (rooms[i]->getBookingStatus()) {
                cout << left << setw(10) << rooms[i]->getRoomNumber() 
                     << setw(15) << rooms[i]->getRoomType() 
                     << setw(20) << rooms[i]->getCustomerName() 
                     << rooms[i]->calculateBill() << endl;
                any = true;
            }
        }
        if (!any) cout << "No active bookings.\n";
    }
};

int main() {
    HotelManager hotel;
    int choice;

    cout << "==========================================\n";
    cout << "   WELCOME TO ELITE HOTEL MANAGEMENT      \n";
    cout << "==========================================\n";

    while (true) {
        cout << "\n--- MAIN MENU ---\n";
        cout << "1. Display All Rooms\n";
        cout << "2. Book a Room\n";
        cout << "3. Cancel Booking\n";
        cout << "4. Check Availability by Type\n";
        cout << "5. View All Booking Records\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                hotel.displayAllRooms();
                break;
            case 2:
                hotel.bookRoom();
                break;
            case 3:
                hotel.cancelBooking();
                break;
            case 4:
                hotel.searchByType();
                break;
            case 5:
                hotel.viewBookingRecords();
                break;
            case 6:
                cout << "Thank you for using Elite Hotel Management System!\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
