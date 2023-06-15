#include <iostream>
using namespace std;

template <typename T>
class BinaryTreeNode{
    
    public:

    T data; 
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    //constructor: 
    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    //desctructor: 

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
