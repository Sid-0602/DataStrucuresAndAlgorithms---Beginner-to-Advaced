#include <iostream>
using namespace std;


template <typename T>
class BinaryTreeNode{
    
    public:

    T data; 
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    //constructor: 
    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    //desctructor: 

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};


//print function: 
void printTree(BinaryTreeNode<int>* root){
    //BASE CASE: 
    if(root==NULL){
        return;
    }

    cout<<root->data<<" : ";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data<<" ";
    }

    if(root->right!=NULL){
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}


//take input for BT:

BinaryTreeNode<int>* takeInput(){
    int rootdata;
    // -1 is entered to return null. (i.e) no child is present.
    cout<<"Enter the data of current node:  "<<endl;
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int>* left = takeInput();
    BinaryTreeNode<int>* right = takeInput();
    root->left = left;
    root->right = right;
}


int main(){
  /*  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2;

    */
   BinaryTreeNode<int>* root = takeInput();

    printTree(root);
}



