#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
bool isBSTUtil(Node* root, Node*& prev) {
    if (root == NULL)
        return true;

    if (!isBSTUtil(root->left, prev))
        return false;

    if (prev != NULL && root->data <= prev->data)
        return false;

    prev = root;

    return isBSTUtil(root->right, prev);
}

bool isBST(Node* root) {
    Node* prev = NULL;
    return isBSTUtil(root, prev);
}

Node* newNode(int val) {
    return new Node(val);
}

int main() {
    Node* root1 = newNode(4);
    root1->left = newNode(2);
    root1->right = newNode(6);
    root1->left->left = newNode(1);
    root1->left->right = newNode(3);
    root1->right->left = newNode(5);
    root1->right->right = newNode(7);

    cout << "Tree 1 is " << (isBST(root1) ? "a BST" : "not a BST") << endl;

    Node* root2 = newNode(5);
    root2->left = newNode(2);
    root2->right = newNode(8);
    root2->left->left = newNode(1);
    root2->left->right = newNode(9);

    cout << "Tree 2 is " << (isBST(root2) ? "a BST" : "not a BST") << endl;

    return 0;
}
