#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertAtBeginning(node* new_node) {
    if (head == NULL) {
        head = new_node;
    } else {
        node *temp = head;
        new_node->next=temp;
		head = new_node;
		
    }
    /*node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_node;
     */
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
    // Insert initial 4 nodes
    node* first = new node();
    first->data = 10;
    first->next = NULL;
    insertAtBeginning(first);

    node* second = new node();
    second->data = 20;
    second->next = NULL;
    insertAtBeginning(second);

    node* third = new node();
    third->data = 30;
    third->next = NULL;
    insertAtBeginning(third);

    node* fourth = new node();
    fourth->data = 40;
    fourth->next = NULL;
    insertAtBeginning(fourth);

    // Display initial list with 4 elements
    cout << "Initial List (4 elements):\n";
    display();  // Output: 40->30->20->10->NULL

    // Insert new node at the beginning
    node* fifth = new node();
    fifth->data = 50;
    fifth->next = NULL;
    insertAtBeginning(fifth);

    // Display updated list with 5 elements
    cout << "\nAfter Adding New Element (5 elements):\n";
    display();  // Output: 50->40->30->20->10->NULL

    return 0;
}