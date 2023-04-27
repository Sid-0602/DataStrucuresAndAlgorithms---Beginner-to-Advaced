#include <bits/stdc++.h>
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


int minimum(BinaryTreeNode<int>* root){

    //base case:
    if(root==NULL){
        return INT_MAX;
    }

    return std::min(root->data, std::min(minimum(root->left),minimum(root->right)));
}

int maximum(BinaryTreeNode<int>* root){

    //base case:
    if(root==NULL){
        return INT_MIN;
    }

    return std::max(root->data,std::max(maximum(root->left), maximum(root->right)));
}


bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here

    //base case:
    if(root==NULL){
        return true;
    }

    int left_max = maximum(root->left);
    int right_min = minimum(root->right);


    //4 conditions are checked: 
    bool ans= (root->data > left_max) && (root->data<=right_min) && isBST(root->left) && isBST(root->right);

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