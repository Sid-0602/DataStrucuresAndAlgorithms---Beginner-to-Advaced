#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};



int getLargeNodeCount(TreeNode<int>* root, int x) {

    int counter = 0 ; 
    // Write your code here
    if(root ==NULL){
        counter = 0;
        return counter;
    }
    if(root->data > x){
        counter++;

        for(int i=0;i<root->children.size();i++){
        if(root->children[i]->data > x){
                
                counter+=getLargeNodeCount(root->children[i],x);
            }

            getLargeNodeCount(root->children[i],x);

        }
    }

    else{

        for(int i=0;i<root->children.size();i++){
        if(root->children[i]->data > x){
                counter+=getLargeNodeCount(root->children[i],x);
            }

            getLargeNodeCount(root->children[i],x);

        }
    }    

    return counter;
    
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
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cin >> x;
    cout << getLargeNodeCount(root, x);
}