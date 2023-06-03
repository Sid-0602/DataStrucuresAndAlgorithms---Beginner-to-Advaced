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

isBSTReturn isBST2(BinaryTreeNode<int> *root){
    if(root==NULL){
        isBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;

        return output;
    }
    isBSTReturn output;

    isBSTReturn leftoutput = isBST2(root->left);
    isBSTReturn rightoutput = isBST2(root->right);

    int minimum = min(root->data, min(leftoutput.minimum, rightoutput.minimum));
    int maximum = max(root->data, max(leftoutput.maximum, rightoutput.maximum));

    bool isBSTFinal = (root->data>leftoutput.maximum) && (root->data<rightoutput.maximum) && leftoutput.isBST && rightoutput.isBST;

    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;

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