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

bool flag = false;

bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here

    if(root->children.size()==0){
        if(root->data == x){
            flag= true;
            return flag;
        }
        else{
            return flag;
        }
    }


    
    for(int i=0; i<root->children.size();i++){

        isPresent(root->children[i],x); //recursive call. 
        
        if(root->children[i]->data == x){
            cout<<"Element found has parent: "<<root->data<<endl;
            cout<<"Element found: "<<root->children[i]->data<<endl;
            return flag;
        }
        
    } 

    return flag;    
    
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
    cout<<"Fill the tree values: "<<endl;
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cout<<"Enter the x value: "<<endl;
    cin >> x;
    cout << (isPresent(root, x) ? "true" : "false");
}