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
    int rootData;
    cout<<"Enter the data of root node: "<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pending_nodes;
    pending_nodes.push(root);

    while(pending_nodes.size()!=0){
        BinaryTreeNode<int>* front = pending_nodes.front();
        pending_nodes.pop();

        //take input of the left child: 
        cout<<"Enter left child of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child; 
            pending_nodes.push(child);
        }

        //take input of right child: 
        cout<<"Enter right child of: "<<front->data<<endl; 
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pending_nodes.push(child);
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
