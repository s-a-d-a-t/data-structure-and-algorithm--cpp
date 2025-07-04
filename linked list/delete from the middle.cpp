#include <iostream>
using namespace std;

// Define the structure of a node
struct node {
    int data;
    node* next;
};

// Global head pointer
node* head = NULL;

// Function to delete a node with a given data value
void deleteAtMiddle(int data) {
    if (head == NULL) {
        cout << "The linked list is empty" << endl;
    } else {
        node* temp = head;
        node* temp2 = NULL;

        // If the node to be deleted is the head
        if (head->data == data) {
            head = head->next;
            delete temp;
            return;
        }

        // Traverse to find the node before the one to delete
        while (temp != NULL && temp->data != data) {
            temp2 = temp;
            temp = temp->next;
        }

        // If node is found
        if (temp != NULL) {
            temp2->next = temp->next;
            delete temp;
        } else {
            cout << "Data not found in the linked list" << endl;
        }
    }
}

// Function to display the linked list in a->b->c format
void display() {
    if (head == NULL) {
        cout << "The linked list is empty" << endl;
        return;
    }

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Manually create and link nodes
    node* first = new node{10, NULL};
    node* second = new node{20, NULL};
    node* third = new node{30, NULL};
    node* fourth = new node{40, NULL};

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    // Display before deletion
    cout << "Before Deletion:" << endl;
    display();

    // Delete node with data 30
    deleteAtMiddle(30);

    // Display after deletion
    cout << "After Deletion:" << endl;
    display();

    return 0;
}
