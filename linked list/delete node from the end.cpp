#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

// Modified deleteAtEnd function using your algorithm
void deleteAtEnd() {
    if (head == NULL) {
        cout << "The linked list is empty" << endl;
    } else {
        node* temp = head;
        node* temp2 = NULL;  // Track the previous node

        // Traverse to the last node
        while (temp->next != NULL) {
            temp2 = temp;    // Save the previous node
            temp = temp->next;
        }

        // Update the second-to-last node's "next" pointer
		temp2->next=NULL;
        delete temp;  // Delete the last node
    }
}

// Display the list in a->b->c->NULL format
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
    // Create and link nodes: 10->20->30->40->NULL
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

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    // Display before deletion
    cout << "Before Deletion:\n";
    display();  // Output: 10->20->30->40->NULL

    // Delete the last node
    deleteAtEnd();

    // Display after deletion
    cout << "\nAfter Deletion:\n";
    display();  // Output: 10->20->30->NULL

    return 0;
}