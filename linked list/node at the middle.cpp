#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

node* head = NULL;

void insertAtMiddle(int x, node* new_node) {
    if (head == NULL) {
        head = new_node;
    } else {
        node* temp = head;
        node* temp2;
        while (temp != NULL && temp->data != x) {
            temp = temp->next;
        }

            temp2 = temp->next;
            temp->next = new_node;
            new_node->next = temp2;
        
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
    // Create and link initial nodes: 10->20->30->40->NULL
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    // Display before insertion
    cout << "Before Insertion:\n";
    display();  // Output: 10->20->30->40->NULL

    // Insert new node after value 20
    node* new_node = new node(25);
    insertAtMiddle(20, new_node);

    // Display after insertion
    cout << "\nAfter Insertion:\n";
    display();  // Output: 10->20->25->30->40->NULL

    return 0;
}