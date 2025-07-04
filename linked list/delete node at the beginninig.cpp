#include <iostream>
using namespace std;

// Define the structure of a node (no constructor)
struct node {
    int data;
    node* next;
};

// Global head pointer
node* head = NULL;

// Function to delete the first node
void deleteAtBeginning() {
    if (head == NULL) {
        cout << "The linked list is empty" << endl;
    } else {
        node* temp = head;
        head = head->next;
        delete temp;
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
        if (temp->next != NULL) {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}

int main() {
    // Create four nodes (manual initialization)
    node* first = new node;
    first->data = 10;
    first->next = NULL;

    node* second = new node;
    second->data = 20;
    second->next = NULL;

    node* third = new node;
    third->data = 30;
    third->next = NULL;

    node* fourth = new node;
    fourth->data = 40;
    fourth->next = NULL;

    // Link the nodes
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    // Display before deletion
    cout << "Before Deletion:\n";
    display();  // Output: 10->20->30->40->NULL

    // Delete first node
    deleteAtBeginning();

    // Display after deletion
    cout << "\nAfter Deletion:\n";
    display();  // Output: 20->30->40->NULL

    return 0;
}