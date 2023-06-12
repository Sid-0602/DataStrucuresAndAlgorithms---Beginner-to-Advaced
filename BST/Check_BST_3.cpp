#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

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

// is BST return class:

class isBSTReturn{

    public: 
        bool isBST;
        int minimum;
        int maximum;
};

int maximum(BinaryTreeNode<int> *root){
    //base case:
    if(root==NULL){
        return INT_MIN;
    }

    return max(root->data, max(maximum(root->left),maximum(root->right)));

}

int minimum(BinaryTreeNode<int> *root){
    //base case:
    if(root==NULL){
        return INT_MAX;
    }

    return min(root->data, min(minimum(root->left),minimum(root->right)));
    
}



bool isBST3(BinaryTreeNode<int>* root, int min = INT_MIN, int max = INT_MAX){
    if(root==NULL){
        return true;
    }

    if(root->data<min || root->data>max){
        return false;
    }

    bool isLeftOk = isBST3(root->left,min, max=root->data-1); //changing the max value in range.
    bool isRightOK = isBST3(root->right, min = root->data, max); //changing the min value in range.

    return isLeftOk && isRightOK;

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

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST3(root) ? "true" : "false");
}