#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;


// Insert node at the end (your provided code)
void insertAtEnd(node* new_node) {
    if (head == NULL) {
        head = new_node;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next=NULL;
    }
}

// Display list in forward direction (a <-> b <-> c -> NULL)
void display() {
    if (head == NULL) {
        cout << "THE LINKED LIST IS EMPTY" << endl;
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
    // Create and insert initial nodes (10, 20, 30)
    node* first = new node;
    first->data = 10;
    first->next = NULL;
    first->prev = NULL;
    insertAtEnd(first);

    node* second = new node;
    second->data = 20;
    second->next = NULL;
    second->prev = NULL;
    insertAtEnd(second);

    node* third = new node;
    third->data = 30;
    third->next = NULL;
    third->prev = NULL;
    insertAtEnd(third);

    // Display before inserting new node
    cout << "Before Insertion:\n";
    display();  // Output: 10 <-> 20 <-> 30 -> NULL

    // Insert new node at the end (40)
    node* fourth = new node;
    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = NULL;
    insertAtEnd(fourth);

    // Display after insertion
    cout << "\nAfter Insertion:\n";
    display();  // Output: 10 <-> 20 <-> 30 <-> 40 -> NULL

    return 0;
}