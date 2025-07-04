#include <iostream>
using namespace std;

// Define a structure for a doubly linked list node
struct node {
    int data;
    node* next;
    node* prev;

    // Constructor
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Global head pointer
node* head = NULL;

// Function to delete the first node
void deleteAtBeginning() {
    if (head == NULL) {
        cout << "Empty" << endl;
    } else {
        node* temp = head;
        head =head->next;
        head -> prev=NULL;
        delete temp; // Free memory of the deleted node
    }
}

// Function to display the linked list
void display() {
    if (head == NULL) {
        cout << "NULL" << endl;
        return;
    }

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}


int main() {
    // Create four nodes
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);

    // Link the nodes together
    head = first;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;

    // Display before deletion
    cout << "Before Deletion:" << endl;
    display();

    // Delete the first node
    deleteAtBeginning();

    // Display after deletion
    cout << "\nAfter Deletion:" << endl;
    display();

    return 0;
}
