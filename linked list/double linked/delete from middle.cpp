#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

// Corrected function to delete node with value `x`
void deleteFromMiddle(int x) {
    if (head == NULL) {
        cout << "Empty" << endl;
        return;
    }

    node* temp = head;
    node* temp2;
    // Find the node with data `x`
   while (temp != NULL && temp->data != x) {
            temp2 = temp;
            temp = temp->next;
        }

        // If node is found
      
            temp2->next = temp->next;
            delete temp;
        
    delete temp;  // Free memory
}

// Display list in forward direction
void display() {
    if (head == NULL) {
        cout << "NULL" << endl;
        return;
    }
else{
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}
}


int main() {
    // Create initial list: 10 <-> 20 <-> 30 -> NULL
    node* first = new node;
    first->data = 10;
    first->prev = NULL;
    first->next = NULL;

    node* second = new node;
    second->data = 20;
    second->prev = NULL;
    second->next = NULL;

    node* third = new node;
    third->data = 30;
    third->prev = NULL;
    third->next = NULL;
    
    node* fourth = new node;
    fourth->data = 40;
    third->prev = NULL;
    

    // Link nodes
    head = first;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next= fourth;
    fourth->prev= third;
    fourth->next= NULL;
    

    // Display before deletion
    cout << "Before Deletion:\n";
    display();  // Output: 10 <-> 20 <-> 30 -> NULL

    // Delete node with value 20
    deleteFromMiddle(20);

    // Display after deletion
    cout << "\nAfter Deletion:\n";
    display();  // Output: 10 <-> 30 -> NULL

    return 0;
}