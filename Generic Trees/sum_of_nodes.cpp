#include <iostream>
#include <vector>
#include <queue>
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


int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0; 
    }

    queue<TreeNode<int>*> pendingNodes_sum; 
    pendingNodes_sum.push(root);
    int sum = root->data;

    while(pendingNodes_sum.size()!=0){
        TreeNode<int>* front = pendingNodes_sum.front();
        int numChild = front->children.size();
        pendingNodes_sum.pop();

        for(int i=0;i<numChild;i++){
            sum = sum + front->children[i]->data;
            pendingNodes_sum.push(front->children[i]);
        }
    }

    return sum;
     
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
    cout << sumOfNodes(root);
}