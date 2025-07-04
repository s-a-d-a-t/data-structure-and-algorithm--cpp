#include <iostream>
using namespace std;

#define MAX 5
int a[MAX]; // Maximum size of Stack
int top = -1;

// Push operation
bool push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        a[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }
}

// Pop operation
int pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        int x = a[top--];
        return x;
    }
}

// Peek operation
int peek() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        return a[top];
    }
}

// Check if stack is empty
bool isEmpty() {
    return top == -1;
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    push(15);
    push(26);
    push(38); // Should trigger overflow

    // Delete (pop) two elements from the stack
    cout << "Deleted: " << pop() << endl; // Deletes 26
    cout << "Deleted: " << pop() << endl; // Deletes 15

    cout << "Top element is: " << peek() << endl;

    cout << "Elements present in stack: ";
    while (!isEmpty()) {
        cout << pop() << " ";
    }
    cout << endl;

    return 0;
}
