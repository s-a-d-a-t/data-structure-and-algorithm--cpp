#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

void insertAtMiddle(node* new_node, int x) {
    if (head == NULL) {
        head = new_node;
       
    } else {
        node* temp = head;
        // Find node with data x (corrected loop condition)
        while (temp != NULL && temp->data != x) {
            temp = temp->next;
        }
              new_node->next= temp->next;
              temp->next=new_node;
              new_node->prev= temp;
        
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
    // Create initial nodes with proper initialization
    node* first = new node;
    first->data = 10;
    first->next = NULL;
    first->prev = NULL;

    node* second = new node;
    second->data = 20;
    second->next = NULL;
    second->prev = NULL;

    node* third = new node;
    third->data = 30;
    third->next = NULL;
    third->prev = NULL;

    // Link nodes
    head = first;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = NULL;

    cout << "Before Insertion (3 nodes):\n";
    display();  // 10 <-> 20 <-> 30 -> NULL

    node* fourth = new node;
    fourth->data = 25;
    fourth->next = NULL;
    fourth->prev = NULL;
    insertAtMiddle(fourth, 20);

    cout << "\nAfter Insertion (4 nodes):\n";
    display();  // 10 <-> 20 <-> 25 <-> 30 -> NULL

    return 0;
}