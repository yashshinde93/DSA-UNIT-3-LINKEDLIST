#include <iostream>
#include <string>
using namespace std;

struct Node {
    int seatNo;
    string customerName;
    Node* next;
};

Node* head = NULL;

void bookSeat() {
    Node* newNode = new Node;

    cout << "Enter Seat Number: ";
    cin >> newNode->seatNo;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->seatNo == newNode->seatNo) {
            cout << "Seat already booked!\n";
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter Customer Name: ";
    cin >> ws;
    getline(cin, newNode->customerName);

    newNode->next = head;
    head = newNode;

    cout << "Seat booked successfully!\n";
}

void cancelBooking() {
    int seat;
    cout << "Enter Seat Number to Cancel: ";
    cin >> seat;

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->seatNo != seat) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Booking not found!\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;
    cout << "Booking cancelled successfully!\n";
}

void searchBooking() {
    int seat;
    cout << "Enter Seat Number to Search: ";
    cin >> seat;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->seatNo == seat) {
            cout << "Booking Found!\n";
            cout << "Seat Number: " << temp->seatNo << endl;
            cout << "Customer Name: "
                 << temp->customerName << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Booking not found!\n";
}

void displayBookings() {
    Node* temp = head;

    if (temp == NULL) {
        cout << "No bookings available.\n";
        return;
    }

    cout << "\n--- Booked Seats ---\n";

    while (temp != NULL) {
        cout << "Seat Number: " << temp->seatNo
             << " | Customer: " << temp->customerName
             << endl;
        temp = temp->next;
    }
}

int main() {
    int choice;

    do {
        cout << "\n=== Event Seat Booking System ===\n";
        cout << "1. Book Seat\n";
        cout << "2. Cancel Booking\n";
        cout << "3. Search Booking\n";
        cout << "4. Display Bookings\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookSeat();
                break;
            case 2:
                cancelBooking();
                break;
            case 3:
                searchBooking();
                break;
            case 4:
                displayBookings();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}