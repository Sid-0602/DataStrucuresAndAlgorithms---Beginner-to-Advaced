#include <bits/stdc++.h>
using namespace std;
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

bool flag=false;

bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here

    //base case for recursion: 
    if(root==NULL){
        return flag;
    }

    if(k==root->data){
        flag=true;
        return flag;
    }
    else if(k>root->data){
        searchInBST(root->right,k);
    }
    else{
        searchInBST(root->left,k);
    }

    return flag;


}


BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    cout << ((searchInBST(root, k)) ? "true" : "false");
    delete root;
}