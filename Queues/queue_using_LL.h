#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
	// Define the data members
    Node *head;
    Node *tail; 
    int size; 
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;    
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size==0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        
        Node *newnode = new Node(data); //creating a new node which is to be enqueue
        
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        tail->next= newnode;
        tail = newnode;
        size++;
        
	}


    int dequeue() {
        // Implement the dequeue() function

        if(isEmpty()){
            return 0;
        }

        //using temporary pointer to store value of head to deallocate it: 
        Node *temp =head;
        int ans_element = head->data;   
        head = head->next;
        delete temp;
        size--;
        return ans_element;

    }

    int front() {
        // Implement the front() function

        if(isEmpty()){
            return 0;
        }
        return (head->data);
    }
};