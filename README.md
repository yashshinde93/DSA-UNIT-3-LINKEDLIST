# Event Seat Booking Management System Using Linked List

## Problem Statement
To develop an Event Seat Booking Management System using a Singly Linked List in C++. The system allows users to book seats, cancel bookings, search for bookings, and display all booked seats.

## Objectives
- To implement a Singly Linked List.
- To perform insertion, deletion, searching, and traversal.
- To manage event seat bookings dynamically.

## Features
1. Book a Seat
2. Cancel Booking
3. Search Booking
4. Display All Bookings
5. Exit

## Data Structure
Each node contains:
- Seat Number
- Customer Name
- Pointer to the next node

## Algorithm
1. Start the program.
2. Display the menu.
3. Accept the user's choice.
4. Perform the selected operation.
5. Repeat until the user chooses Exit.
6. Free the allocated memory and stop.

## Concepts Used
- Singly Linked List
- Structures
- Pointers
- Dynamic Memory Allocation
- Insertion and Deletion
- Searching and Traversal

#Sample output

  === Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 1

Enter Seat Number: 101
Enter Customer Name: Rahul Patil
Seat booked successfully!

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 1

Enter Seat Number: 102
Enter Customer Name: Amit Sharma
Seat booked successfully!

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 1

Enter Seat Number: 101
Seat already booked!

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 4

--- Booked Seats ---
Seat Number: 102 | Customer: Amit Sharma
Seat Number: 101 | Customer: Rahul Patil

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 3

Enter Seat Number to Search: 101
Booking Found!
Seat Number: 101
Customer Name: Rahul Patil

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 2

Enter Seat Number to Cancel: 102
Booking cancelled successfully!

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 4

--- Booked Seats ---
Seat Number: 101 | Customer: Rahul Patil

=== Event Seat Booking System ===
1. Book Seat
2. Cancel Booking
3. Search Booking
4. Display Bookings
5. Exit
Enter your choice: 5

Exiting program...

## Programming Language
C++

## Conclusion
This project demonstrates how a Singly Linked List can be used to manage event seat bookings dynamically. It supports booking, cancellation, searching, and displaying booking records.
