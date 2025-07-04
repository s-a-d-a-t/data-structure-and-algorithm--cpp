#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* Left;
    Node* Right;
};

// Function to create a new node without constructor
Node* CreateNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->Left = NULL;
    newNode->Right = NULL;
    return newNode;
}

// Function to insert a node into BST
Node* Insert(Node* root, int value) {
    if (root == NULL)
        return CreateNode(value);

    if (value < root->data)
        root->Left = Insert(root->Left, value);
    else
        root->Right = Insert(root->Right, value);

    return root;
}

// Function to search in BST
Node* SearchBST(Node* RNP, int x) {
    if ((RNP == NULL) || (RNP->data == x))
        return RNP;
    else if (RNP->data > x)
        return SearchBST(RNP->Left, x);
    else
        return SearchBST(RNP->Right, x);
}

// Main function
int main() {
    Node* root = NULL;

    // Insert nodes
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);

    // Search
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    Node* result = SearchBST(root, key);
    if (result != NULL)
        cout << "Value " << key << " found in the BST." << endl;
    else
        cout << "Value " << key << " not found in the BST." << endl;

    return 0;
}
