#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

};

Node* takeInput(){
    //we return head of the LL, hence return type is Node*

    //Entering -1 will terminate this function and LL will be completed:

    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1){
        Node *newNode = new Node(data); //dynamic allocation of newNode.
        if(head==NULL){ //if head is NULL, set value of head as address.
            head = newNode;
        }
        else{
            Node *temp =head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next =newNode;
        }
        
        cin>>data; //take input again
    }

    return head; 
}

Node* takeInput_better(){
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
void printLL(Node *head){
    Node *temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}



int main(){
    Node *head = takeInput_better();

    printLL(head);    

    
}