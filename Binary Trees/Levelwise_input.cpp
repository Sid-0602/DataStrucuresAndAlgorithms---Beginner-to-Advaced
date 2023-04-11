#include <bits/stdc++.h>
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

//take input levelwise: 

BinaryTreeNode<int>* takeInputLevelwise(){

    int rootdata;
    cout<<"Enter the root data: "<<endl;
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        //this is for left child data: 
        cout<<"Enter left child of "<<front->data<<" node"<<endl;
        int leftChilData;
        cin>>leftChilData;
        if(leftChilData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChilData);
            front->left = child;
            pendingNodes.push(child);
        }

        //this is for right child data: 
        cout<<"Enter the right child of "<<front->data<<" node"<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }

    return root; 
}




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



int main(){
    BinaryTreeNode<int>* root = takeInputLevelwise();

    printTree(root);
}
