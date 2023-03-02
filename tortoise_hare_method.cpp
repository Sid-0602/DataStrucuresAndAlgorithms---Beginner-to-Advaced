#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeinput(){
    //we return head of the LL, hence return type is Node*

    //Entering -1 will terminate this function and LL will be completed:

    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL ;
    while(data!=-1){
        Node *newNode = new Node(data); //dynamic allocation of newNode.
        if(head==NULL){ //if head is NULL, set value of head as address.
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
           
        }
        
        cin>>data; //take input again
    }

    return head; 
}

int getslow(Node* head){
    Node* slow= head;
    Node* fast = head->next;
    Node* temp = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}


void print(Node *head){
    Node *temp =head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int main(){
    int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		print(head);
        cout<<getslow(head)<<endl;
	}

	return 0;
    
}