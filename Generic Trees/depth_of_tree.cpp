#include <bits/stdc++.h>
#include "TreeNode_class.h"
using namespace std;



void printAtLevelK(TreeNode<int>* root, int k){
    //edge case: 
    if(root==NULL){
        return;
    }
    //base case:
    if(k==0){
        cout<<root->data<<endl;
        return;
    }

    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i], k-1);
    }
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    cout<<"::::::::::::: Input the tree with Nodes :::::::: "<<endl;
    TreeNode<int>* root = takeInputLevelWise();
    int k;
    cout<<":::: Input k ::::::"<<endl;
    cin>>k;
    printAtLevelK(root,k);
}
