#include <iostream>
using namespace std;

// Define Node structure globally
struct node {
    int item ;
    node* next; // Points to the next node
};

node* head = NULL; // Global head pointer (initially empty)

int main() {
    // Insert first node
    node* first = new node();
    first->item = 10;
   
    // Insert second node
    node* second = new node();
    second->item = 20;
   

    // Insert third node
    node* third = new node();
    third->item = 30;
  
    // linking nodes
    head = first;
    first->next = second;
    second->next = third;
    third ->next = NULL;

    // Display linked list
    node* temp = head;
    while (temp != NULL) {
        cout << temp->item << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
