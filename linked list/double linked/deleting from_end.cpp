#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

// Corrected function to delete the last node
void deleteFromEnd() {
    if (head == NULL) {
        cout << "Empty" << endl;
    
    } else {  // Multiple nodes
        node* temp = head;
        node*temp2;
        while (temp->next != NULL) {
        	
			temp2=temp;
            temp = temp->next;
           
            
        }
        temp2->next=temp->next;
        delete temp;
        
    }
}

// Display list in forward direction
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
    // Create initial list: 10 <-> 20 <-> 30 -> NULL
    node* first = new node{10, NULL, NULL};
    node* second = new node{20, NULL, NULL};
    node* third = new node{30, NULL, NULL};

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    head = first;

    // Display before deletion
    cout << "Before Deletion (3 nodes):\n";
    display();  // 10 <-> 20 <-> 30 -> NULL

    // Delete last node
    deleteFromEnd();

    // Display after deletion
    cout << "\nAfter Deletion (2 nodes):\n";
    display();  // 10 <-> 20 -> NULL

    return 0;
}