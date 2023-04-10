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

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* max_node = root;
    queue <TreeNode<int>*> pendingnode_comp;
    pendingnode_comp.push(root);
    while(pendingnode_comp.size()!=0){
        TreeNode<int>* front = pendingnode_comp.front();
        int numChild = front->children.size();
        pendingnode_comp.pop();

        for(int i=0;i<numChild;i++){
            if(front->children[i]->data > max_node->data){
                max_node = front->children[i];
            }
            pendingnode_comp.push(front->children[i]);
        }
    }

    return max_node;
    
    
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
    TreeNode<int>* ans = maxDataNode(root);

    if (root != NULL) {
        cout << ans->data;
    }
}