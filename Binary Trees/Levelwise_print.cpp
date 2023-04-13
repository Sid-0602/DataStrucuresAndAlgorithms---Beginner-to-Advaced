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


void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here

    queue<BinaryTreeNode<int>*> pendingnodes_print; 
    pendingnodes_print.push(root);
    
    while(pendingnodes_print.size()!=0){
        BinaryTreeNode<int>* front = pendingnodes_print.front();
        pendingnodes_print.pop();

        cout<<front->data<<" : ";

        if(front->left!=NULL){
            cout<<"L:"<<front->left->data<<",";
        }
        if(front->left == NULL){
            cout<<"L:-1"<<",";
        }
        if(front->right!=NULL){
            cout<<"R:"<<front->right->data;
        }
        if(front->right == NULL){
            cout<<"R:-1";
        }
        cout<<endl;

        pendingnodes_print.push(front->left);
        pendingnodes_print.push(front->right);

        
    }
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
    printLevelWise(root);
}