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

bool isBST(BinaryTreeNode<int> *root){
    //base case:

    if(root==NULL){
        return true;
    }

    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);

    bool output = (root->data>leftMax && root->data<rightMin && isBST(root->left) && isBST(root->right));

    return output;

}

//this is object of the class isBSTReturn: 

isBSTReturn isBST2(BinaryTreeNode<int> *root){

    // if the root is null then fill value of object output as true, INT_MIN and INT_MAX.
    if(root==NULL){
        isBSTReturn output;
        output.isBST = true;
        output.maximum = INT_MIN;
        output.minimum = INT16_MAX;

        return output;
    }

    // leftOutput and rightOtput will have 3 arguments: bool, min and max. 
    isBSTReturn  leftOutput  = isBST2(root->left);
    isBSTReturn rightOutput = isBST2(root->right);

    int minimum  = min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum,rightOutput.maximum));

    bool isBSTFinal = (root->data>leftOutput.maximum) && (root->data<rightOutput.minimum) && (leftOutput.isBST) && (rightOutput.isBST);

    isBSTReturn output;
    output.isBST = isBSTFinal;
    output.minimum = minimum;
    output.maximum = maximum;

    return output;

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
    cout << (isBST(root) ? "true" : "false");
}