#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};




int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }

    return 1 + std::max(height(root->left),height(root->right));
}

int diameter(BinaryTreeNode<int>* root){
    if(root=NULL){
        return 0;
    }

    int height_sum = height(root->left) + height(root->right);
    int left_dia = diameter(root->left);
    int right_dia = diameter(root->right);

    return std::max(height_sum , std::max(left_dia,right_dia));
}

pair<int,int>heightDiameter(BinaryTreeNode<int>* root){

    //base case if root==NULL
    if(root==NULL){
        pair<int,int> p; 
        p.first=0;
        p.second=0;
    }

    pair<int,int> leftAns = heightDiameter(root->left);
    pair<int,int> rightAns = heightDiameter(root->right);

    //variables to simplify: 
    int lh = leftAns.first; //first element is height;
    int ld = leftAns.second; //second element is diameter;
    int rh = rightAns.first;
    int rd = rightAns.second;


    int height_ans = 1+ std::max(lh,rh);
    int diameter_ans = std::max(lh+rh, std::max(ld,rd));

    //create pair for answer:
    pair<int,int> p; 
    p.first = height_ans;
    p.second = diameter_ans;

    return p;

}


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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}


int main(){

    BinaryTreeNode<int>* root=takeInputLevelwise();
    printLevelATNewLine(root);
    cout<<endl;
    cout<<"*******************"<<endl;
    cout<<"Height and Diameter of tree is: "<<endl;
    pair<int,int> p = heightDiameter(root);
    cout<<"Height: "<<p.first<<endl;
    cout<<"Diameter "<<p.second<<endl;

    delete root;
    


}