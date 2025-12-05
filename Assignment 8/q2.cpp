#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

Node* insert(Node* root, int data){
    if(root == NULL) return new Node(data);

    if(data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}
Node* searchRec(Node* root, int key){
    if(root == NULL || root->data == key) return root;

    if(key < root->data)
        return searchRec(root->left, key);
    else
        return searchRec(root->right, key);
}
Node* searchNonRec(Node* root, int key){
    while(root != NULL){
        if(root->data == key) return root;
        if(key < root->data) root = root->left;
        else root = root->right;
    }
    return NULL;
}

Node* findMax(Node* root){
    if(root == NULL) return NULL;
    while(root->right != NULL)
        root = root->right;
    return root;
}

Node* findMin(Node* root){
    if(root == NULL) return NULL;
    while(root->left != NULL)
        root = root->left;
    return root;
}

Node* inorderSuccessor(Node* root, int key){
    Node* curr = searchRec(root, key);
    if(curr == NULL) return NULL;

    if(curr->right) return findMin(curr->right);

    Node* succ = NULL;
    Node* ancestor = root;
    while(ancestor != curr){
        if(key < ancestor->data){
            succ = ancestor;
            ancestor = ancestor->left;
        }
        else ancestor = ancestor->right;
    }
    return succ;
}
Node* inorderPredecessor(Node* root, int key){
    Node* curr = searchRec(root, key);
    if(curr == NULL) return NULL;

    if(curr->left) return findMax(curr->left);

    Node* pred = NULL;
    Node* ancestor = root;
    while(ancestor != curr){
        if(key > ancestor->data){
            pred = ancestor;
            ancestor = ancestor->right;
        }
        else ancestor = ancestor->left;
    }
    return pred;
}

int main(){
    Node* root = NULL;
    int arr[] = {20, 8, 22, 4, 12, 10, 14};

    for(int x : arr)
        root = insert(root, x);

    cout << "Min = " << findMin(root)->data << endl;
    cout << "Max = " << findMax(root)->data << endl;
    cout << "Successor of 12 = " 
         << inorderSuccessor(root, 12)->data << endl;
    cout << "Predecessor of 12 = " 
         << inorderPredecessor(root, 12)->data << endl;

    return 0;
}
