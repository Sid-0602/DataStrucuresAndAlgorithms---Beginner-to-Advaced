#include <iostream>
#include "TreeNode_class.h"
#include <vector>
#include <queue>
using namespace std;

//destructor: this is used to delete tree after dynamically allocatiion.

void deletetree(TreeNode<int>* root){
    for(int i =0; i<root->children.size();i++){
        deletetree(root->children[i]);
    }
    delete root;
}

void printTree(TreeNode<int>* root){
    //this is a edge case and not a base case.
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0; i<root->children.size();i++){
        cout<<root->children[i]->data<<" ";
    }

    cout<<endl;

    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}


TreeNode<int>* takeInputLevelWise(){
    //logic is using queue to implement a tree levelwise.


    //This is construction of root node: 
    int rootdata;
    cout<<"Enter the data: ";
    cin>>rootdata; 
    TreeNode<int>* root = new TreeNode<int>(rootdata);

    queue<TreeNode<int>*> pendingNodes; 

    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout<<"Enter Number of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0; i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            //can't allocate nodes statically as they will be wiped from memory after next itrations. 
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);

        }
    }

    return root; 
}



int main(){

    TreeNode<int>* root = takeInputLevelWise();
    delete root;

}