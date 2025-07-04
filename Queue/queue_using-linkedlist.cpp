#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* front = nullptr;
node* rear = nullptr;

void insert() {
    int val;
    cout << "Insert the element in queue: ";
    cin >> val;

    node* temp = new node;
    temp->data = val;
    temp->next = nullptr;

    if (rear == nullptr) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

void deleten() {
    if (front == nullptr) {
        cout << "Underflow (Queue is empty)\n";
        return;
    }

    node* temp = front;
    if (front->next != nullptr) {
        front = front->next;
    } else {
        front = rear = nullptr;
    }
    cout << "Deleted element: " << temp->data << endl;
    delete temp;
}

void Display() {
    if (front == nullptr && rear == nullptr) {
        cout << "Queue is empty\n";
        return;
    }

    node* temp = front;
    cout << "Queue elements are: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int ch;
    cout << "1) Insert element to queue\n";
    cout << "2) Delete element from queue\n";
    cout << "3) Display all the elements of queue\n";
    cout << "4) Exit\n";

    do {
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1: insert(); break;
            case 2: deleten(); break;
            case 3: Display(); break;
            case 4: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (ch != 4);

    return 0;
}
