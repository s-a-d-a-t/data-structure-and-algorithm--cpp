#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Top of the stack
Node* top = NULL;

// Push operation
void push(int val) {
    Node* newnode = new Node;
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

// Pop operation
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
    } else {
        Node* temp = top;
        cout << "The popped element is " << temp->data << endl;
        top = top->next;
        delete temp;
    }
}

// Display operation
void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        Node* temp = top;
        cout << "Stack elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

// Main function
int main() {
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter value to be pushed: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while (ch != 4);

    return 0;
}
