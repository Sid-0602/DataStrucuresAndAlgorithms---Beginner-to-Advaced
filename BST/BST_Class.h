#include "BinaryTreeNode_Class.h"

class BST{
    //This is Binary search Tree class: 
    //This includes: Search, insert and delete function.

    BinaryTreeNode<int>* root;

    public:

        //constructor and destructors for root, as by default it will return garbage value.
        BST(){
            root==NULL;
        }

        ~BST(){
            delete root;
        }


        private: 

            void printHelper(BinaryTreeNode<int>* root){
                if(root=NULL){
                    return;
                }#include <iostream>
using namespace std;
#include "BinaryTreeNode_Class.h"
class BST {
	BinaryTreeNode<int>* root;

	public:

	BST() {
		root = NULL;
	}

	~BST() {
		delete root;
	}

	private:
	BinaryTreeNode<int>* deleteData(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			return NULL;
		}

		if (data > node->data) {
			node->right = deleteData(data, node->right);
			return node;
		} else if (data < node->data) {
			node->left = deleteData(data, node->left);
			return node;
		} else {
			if (node->left == NULL && node->right == NULL) {
				delete node;
				return NULL;
			} else if (node->left == NULL) {
				BinaryTreeNode<int>* temp = node->right;
				node->right = NULL;
				delete node;
				return temp;
			} else if (node->right == NULL) {
				BinaryTreeNode<int>* temp = node->left;
				node->left = NULL;
				delete node;
				return temp; 
			} else {
				BinaryTreeNode<int>* minNode = node->right;
				while (minNode->left != NULL) {
					minNode = minNode->left;
				}
				int rightMin = minNode->data;
				node->data = rightMin;
				node->right = deleteData(rightMin, node->right);
				return node;
			}
		}
	}

	void printTree(BinaryTreeNode<int>* root) {
		if (root == NULL) {
			return;
		}
		cout << root->data << ":";
		if (root->left != NULL) {
			cout << "L:" << root->left->data<<",";
		}

		if (root->right != NULL) {
			cout << "R:" << root->right->data;
		}
		cout << endl;
		printTree(root->left);
		printTree(root->right);
	}


	public:
	void remove(int data) {
		root = deleteData(data, root);	
	}

	void print() {
		printTree(root);
	}

	private:
	BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
			return newNode;
		}

		if (data < node->data) {
			node->left = insert(data, node->left);
		} else {
			node->right = insert(data, node->right);
		}
		return node;
	}

	public:
	void insert(int data) {
		this->root = insert(data, this->root);
	}

	private:
	bool hasData(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			return false;
		}

		if (node->data == data) {
			return true;
		} else if (data < node->data) {
			return hasData(data, node->left);
		} else {
			return hasData(data, node->right);
		}
	}

	public:
	bool search(int data) {
		return hasData(data, root);
	}
};
                cout<<root->data<<":";
                if(root->left!=NULL){
                    cout<<root->left->data<<":";
                }

                if(root->right!=NULL){
                    cout<<root->right->data<<" : ";
                }

                cout<<endl;

                printHelper(root->left);
                printHelper(root->right);

                
            }

            BinaryTreeNode<int>* deleteDataPrivate(int data, BinaryTreeNode<int>* node){

                if(node == NULL){
                    return NULL;
                }

                if(data>node->data){
                    node->right = deleteDataPrivate(data,node->right);
                    return node;
                }

                else if(data<node->data){
                    node->left = deleteDataPrivate(data,node->left);
                    return node;
                }

                else{

                    if(node->left==NULL && node->right==NULL){
                        delete node;
                        return NULL;
                    }
                    else if(node->left==NULL && node->right!=NULL){
                        BinaryTreeNode<int>* temp_node = node->right;
                        node->right = NULL;
                        delete node;
                        return temp_node;
                    }

                    else if(node->left!=NULL && node->right==NULL){
                        BinaryTreeNode<int>* temp_node = node->left;
                        node->left = NULL;
                        delete node;
                        return temp_node;
                    }

                    else{
                        //replacement we take is min element from right Subtree.
                        BinaryTreeNode<int>* minNode = node->right;
                        while(minNode->left!=NULL){
                            minNode = minNode->left;
                        }

                        int rightmin = minNode->data;
                        node->data = rightmin;
                        node->right = deleteDataPrivate(rightmin,node->right);
                        return node;
                    }
                }

            }

            BinaryTreeNode<int>* insertDataPrivate(int data, BinaryTreeNode<int>* node){
                if(root==NULL){
                    BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
                    return newNode;
                }

                if(data<node->data){
                    node->left = insertDataPrivate(data,node->left);
                }else{
                    node->right = insertDataPrivate(data,node->right);
                }

                return node;
            }


            bool hasDataPrivate(int data, BinaryTreeNode<int>* root){
                if(root==NULL){
                    return false;
                }

                if(root->data == data){
                    return true;
                }
                else if(data<root->data){
                    return hasDataPrivate(data, root->left);
                }
                else{
                    return hasDataPrivate(data,root->right);
                }
            }

            

        void remove(int data){
            root = deleteDataPrivate(data,root);
        }

        void print() { 
        // Implement the print() function
            printHelper(root);
        }

        void insert(int data){

            //updating the current root with the changes from the helper function.
            this->root = insertDataPrivate(data, this->root);
        }

        bool search(int data){
            return hasDataPrivate(data,root);
        }

};