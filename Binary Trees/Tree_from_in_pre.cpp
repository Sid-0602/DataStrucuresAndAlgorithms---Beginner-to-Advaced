#include <iostream>
#include <queue>
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

BinaryTreeNode<int>* buildTreeHelper(int *in, int *pre, int inS, int inE, int preS ,int preE){
    //base case:
    if(inS>inE){
        return NULL;
    }

    int rootData = pre[preS]; //root element is at start of preorder.
    
    //writing index of root in in-order array:
    int rootIndex=-1;
    for(int i= inS; i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    
    //these are left pre-order and in-order 
    int leftPreS=preS+1;
    int leftInS=inS;
    int leftInE = rootIndex-1;
    int leftPreE=leftInE-leftInS+leftPreS;

    //these are right pre-order and in-order 
    int rightPreS=leftPreE+1;
    int rightPreE=preE;
    int rightIns=rootIndex+1;
    int rightInE=inE;

    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(in, pre, leftInE, leftInE, leftPreS,leftPreE);
    root->right = buildTreeHelper(in, pre, rightIns, rightInE, rightPreS, rightPreE);
    return root;
}

BinaryTreeNode<int>* buildTree(int *in, int*pre, int size){
    //helper function: 
    return buildTreeHelper(in, pre, 0, size-1,0,size-1);
}


BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
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

int main() {
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre,in, size);
    printLevelATNewLine(root);
}