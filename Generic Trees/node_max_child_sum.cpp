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

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root ==NULL){
        return 0;
    }

    int max_sum=-1;
    TreeNode<int>* max_sum_node = root;

    queue<TreeNode<int>*> pending_nodes_sum;
    pending_nodes_sum.push(root);

    while(pending_nodes_sum.size()!=0){
        TreeNode<int>* front = pending_nodes_sum.front();
        pending_nodes_sum.pop();

        int sum_of_nodes = front->data;
        for(int i=0; i<front->children.size();i++){
            sum_of_nodes+= front->children[i]->data;
            pending_nodes_sum.push(front->children[i]);
        }
        
        if(sum_of_nodes > max_sum){
            max_sum = sum_of_nodes;
            max_sum_node = front;
        }

    }

    return max_sum_node;
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

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}