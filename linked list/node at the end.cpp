#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertAtEnd(node* new_node) {
    if (head == NULL) {
        head = new_node;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
    }
}

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
    // Create and insert first three nodes
    node* first = new node;
    first->data = 10;
    first->next = NULL;
    insertAtEnd(first);

    node* second = new node;
    second->data = 20;
    second->next = NULL;
    insertAtEnd(second);

    node* third = new node;
    third->data = 30;
    third->next = NULL;
    insertAtEnd(third);

    // Display the linked list BEFORE inserting the fourth node
    cout << "Before Insertion:\n";
    display(); // Output: 10->20->30->NULL

    // Insert the fourth node
    node* fourth = new node;
    fourth->data = 40;
    fourth->next = NULL;
    insertAtEnd(fourth);
    cout << "\nInserting node with data = 40 at the end...\n";

    // Display the linked list AFTER insertion
    cout << "\nAfter Insertion:\n";
    display(); // Output: 10->20->30->40->NULL

    return 0;
}