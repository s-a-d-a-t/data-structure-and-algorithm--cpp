#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

void insertAtBeginning(node* new_node) {
    if (head == NULL) {
        head = new_node;
      
    } else {
        node* temp = head;
        temp->prev = new_node;
        new_node->next = temp;
        new_node->prev = NULL;
        head = new_node;
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
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    // Create and insert three nodes silently
    node* first = new node{10, NULL, NULL};
    insertAtBeginning(first);

    node* second = new node{20, NULL, NULL};
    insertAtBeginning(second);

    node* third = new node{30, NULL, NULL};
    insertAtBeginning(third);

    // Display the initial 3-node list
    cout << "Before Insertion (3 nodes):\n";
    display();  // Output: 30 <-> 20 <-> 10 -> NULL

    // Insert fourth node at the beginning
    node* fourth = new node{40, NULL, NULL};
    insertAtBeginning(fourth);

    // Display the updated 4-node list
    cout << "\nAfter Insertion (4 nodes):\n";
    display();  // Output: 40 <-> 30 <-> 20 <-> 10 -> NULL

    return 0;
}