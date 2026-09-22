# Hotel Booking System (C++ OOP Project)

This is a console-based Hotel Booking System designed for a 1st-year university Object-Oriented Programming (OOP) project.

## OOP Concepts Demonstrated

*   **Encapsulation**: Data members like room status and price are protected/private, accessed via public methods.
*   **Inheritance**: `StandardRoom`, `DeluxeRoom`, and `SuiteRoom` classes inherit from the base `Room` class.
*   **Polymorphism**: 
    *   **Virtual Functions**: `getRoomType()` and `displayRoomDetails()` are virtual.
    *   **Function Overriding**: Specific room logic is implemented in derived classes.
*   **Abstraction**: The main interface interacts with the `HotelManager` class, which handles all internal logic without exposing low-level details.
*   **Constructors**: Used to initialize room properties.

## Features

1.  **Display Rooms**: Shows a table of all room numbers, types, prices, and status.
2.  **Room Booking**: Allows booking by entering a room number and guest details.
3.  **Cancellation**: Cancel a booking and free up the room.
4.  **Availability Search**: Filter rooms by type (Standard/Deluxe/Suite).
5.  **Billing**: Automatically calculates total bill (Suite rooms include a luxury tax example).
6.  **Booking Records**: View a list of all currently booked rooms and total revenue per booking.

## How to Compile and Run

To compile the program, use a C++ compiler like `g++`:

```bash
g++ main.cpp -o hotel_system
./hotel_system
```

On Windows:
```bash
g++ main.cpp -o hotel_system.exe
hotel_system.exe
```
