#include <iostream>
#include "TreeNode_class.h"
using namespace std;

//Tree printing. 
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

//take input: 
TreeNode<int>* takeInput(){
        int rootdata;
        cout<<"Enter data: ";
        cin>>rootdata;
        TreeNode<int>* root = new TreeNode<int>(rootdata);

        int n;
        cout<<"Enter Children of "<<rootdata<<" : "<<endl;
        cin>>n;

        for(int i=0;i<n;i++){
            TreeNode<int>* child = takeInput();
            root->children.push_back(child);
        }

    return root; 
}

int main(){
    
    /*
    TreeNode<int>* root = new TreeNode<int>(0);
    TreeNode<int>* node1 = new TreeNode<int>(1);
    TreeNode<int>* node2 = new TreeNode<int>(2);
    TreeNode<int>* node3 = new TreeNode<int>(3);
    TreeNode<int>* node4 = new TreeNode<int>(4);
    TreeNode<int>* node5 = new TreeNode<int>(5);

    root->children.push_back(node1);
    root->children.push_back(node2);
    node1->children.push_back(node3);
    node1->children.push_back(node4);
    node2->children.push_back(node5);

    */

   TreeNode<int>* root = takeInput();
   printTree(root);



}