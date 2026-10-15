# DSA-UNIT-3-LINKEDLIST
# Event Seat Booking Management Using Linked List

## 1. Problem Statement
To develop an Event Seat Booking Management System using a Singly Linked List in C++. The system allows users to book seats, cancel bookings, and display booked seats while preventing duplicate seat bookings.

## 2. Objective
- To implement a Singly Linked List in C++.
- To perform insertion and deletion operations.
- To manage event seat bookings.
- To prevent duplicate seat bookings.
- To display the booked seats.

## 3. Introduction
An Event Seat Booking Management System manages seat bookings for an event. In this project, a Singly Linked List is used to store booked seat numbers dynamically. Each node represents a booked seat and contains the seat number and a pointer to the next node. The system supports booking, cancellation, and displaying booked seats.

## 4. Algorithm
1. Start the program.
2. Create a Singly Linked List with an initially empty head pointer.
3. Book a seat by creating a new node.
4. Check whether the seat is already booked.
5. If the seat is already booked, display a message.
6. Otherwise, insert the new node into the linked list.
7. To cancel a booking, search for the seat and delete its node.
8. Display all booked seats by traversing the linked list.
9. Repeat the operations as required.
10. Free the allocated memory.
11. Stop the program.

## 5. Flowchart

Start
  |
  v
Initialize Linked List
  |
  v
Book Seat
  |
  v
Check Duplicate Seat
  |
  v
Insert Seat into Linked List
  |
  v
Display Booked Seats
  |
  v
Cancel Booking if Required
  |
  v
Free Allocated Memory
  |
  v
Stop

## 6. Code
The C++ source code is available in:
`Event_Seat_Booking.cpp`

The program uses a Singly Linked List to perform seat booking, duplicate checking, cancellation, and display operations.

## 7. Output Screenshot
Add the screenshot of the program output here.

The output demonstrates successful seat booking, duplicate seat detection, displaying booked seats, and cancellation of a booking.

## 8. Result
The Event Seat Booking Management System was implemented successfully using a Singly Linked List in C++. The program performs insertion, deletion, duplicate checking, and traversal operations.

## 9. Conclusion
This project demonstrates the practical application of a Singly Linked List in managing event seat bookings. It helps in understanding pointers, dynamic memory allocation, insertion, deletion, and traversal in C++.