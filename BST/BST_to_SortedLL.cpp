#include <iostream>
#include <queue>
using namespace std;

template <typename T>

class Node {
   public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Pair{
    public: 
        Node<int> *head;
        Node<int>* tail;
};

Pair BST(BinaryTreeNode<int>* root){
    
    //base case: 
    if(root==NULL){
        Pair sorted_ll ; 
        sorted_ll.head = NULL;
        sorted_ll.tail = NULL;

        return sorted_ll;
    }

    Node<int> *node = new Node<int> (root->data);

    Pair left_LL = BST(root->left);
    Pair right_LL =BST(root->right);

    Pair sorted_LL;

    if(left_LL.head==NULL && right_LL.head==NULL){
        sorted_LL.head=node;
        sorted_LL.tail=node;
    }

    else if(!left_LL.head && right_LL.head){
        sorted_LL.head = node;
        node->next = right_LL.head;
        sorted_LL.tail = right_LL.tail;
    }

    else if(left_LL.head && right_LL.head == NULL){
        sorted_LL.head = left_LL.head;
        left_LL.tail->next = node;
        sorted_LL.tail = node;
    }

    else{
        sorted_LL.head = left_LL.head;
        left_LL.tail->next = node;
        node->next = right_LL.head;
        sorted_LL.tail = right_LL.tail;
    }


    return sorted_LL;



}


Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
    return BST(root).head;
}

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}