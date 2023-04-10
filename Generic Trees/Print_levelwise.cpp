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


void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return;
    }

    queue<TreeNode<int>*> pendingNodes_print; 
    pendingNodes_print.push(root);
    while(pendingNodes_print.size()!=0){
        TreeNode<int>* front_element = pendingNodes_print.front();
        int numChild = front_element->children.size();
        pendingNodes_print.pop();

        cout<<front_element->data<<":";
        if(numChild == 0){
            
                // TreeNode<int>* curr_child = new TreeNode<int>(front->children[i]->data);
                cout<<" "<<endl;
        }
        else{
            for(int i=0;i<numChild;i++){
                if(i<numChild-1){
                    cout<<front_element->children[i]->data<<",";
                   
                }
                else{
                    cout<<front_element->children[i]->data<<" ";
                   
                }
                
                pendingNodes_print.push(front_element->children[i]);
            }
            cout<<endl;
        }
         

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
    TreeNode<int>* root = takeInputLevelWise();
    printLevelWise(root);
}