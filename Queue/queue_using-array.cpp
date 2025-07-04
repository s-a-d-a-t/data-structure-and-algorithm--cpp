#include <iostream>
using namespace std;

const int MAX = 10;
int queue[MAX];
int front = -1, rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
}

int dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    int val = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return val;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    cout << "Dequeued: " << dequeue() << endl;
    display();
    return 0;
}
