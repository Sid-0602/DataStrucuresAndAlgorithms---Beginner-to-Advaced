#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int>* sortedArrayToBST(int *input, int start, int end){
    
    //for empty array: 
    if(start>end){
        return NULL;
    }

    int mid = start + (end-start)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]); //create a new node using mid element.
    root->left = sortedArrayToBST(input,start,mid-1); //recursive call on left half of BST
    root->right = sortedArrayToBST(input,mid+1,end); //recursive call on right half of BST
    
    return root;
    
}


BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    
    sortedArrayToBST(input,0,n-1);
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void preOrder(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";

    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    int size;
    cin >> size;
    int* input = new int[size];

    for (int i = 0; i < size; i++) cin >> input[i];

    BinaryTreeNode<int>* root = constructTree(input, size);
    preOrder(root);
    delete[] input;
}