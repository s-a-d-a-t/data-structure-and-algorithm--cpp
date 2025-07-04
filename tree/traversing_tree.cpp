#include <iostream>
using namespace std;

// Define a node of the binary tree
struct Node {
    int data;
    Node* Left;
    Node* Right;

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        Left = NULL;
        Right = NULL;
    }
};

// Preorder Traversal (Root, Left, Right)
void Preorder(Node* temp) {
    if (temp != NULL) {
        cout << temp->data << " ";
        Preorder(temp->Left);
        Preorder(temp->Right);
    }
}

// Inorder Traversal (Left, Root, Right)
void Inorder(Node* temp) {
    if (temp != NULL) {
        Inorder(temp->Left);
        cout << temp->data << " ";
        Inorder(temp->Right);
    }
}

// Postorder Traversal (Left, Right, Root)
void Postorder(Node* temp) {
    if (temp != NULL) {
        Postorder(temp->Left);
        Postorder(temp->Right);
        cout << temp->data << " ";
    }
}

int main() {
    // Creating a sample binary tree:
    //         1
    //        / \
    //       2   3
    //      / \   \
    //     4   5   6

    Node* root = new Node(1);
    root->Left = new Node(2);
    root->Right = new Node(3);
    root->Left->Left = new Node(4);
    root->Left->Right = new Node(5);
    root->Right->Right = new Node(6);

    cout << "Preorder Traversal: ";
    Preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    Inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    Postorder(root);
    cout << endl;

    return 0;
}
