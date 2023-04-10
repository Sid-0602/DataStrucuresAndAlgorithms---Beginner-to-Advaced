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

//insert into ith node: 

Node* insertIntoIth(Node *head, int data, int x){
    Node *newNode = new Node(data);
    int count=0;
    Node *temp = head;

    if(x == 0){
        newNode->next = head;
        head = newNode; //head is updated, hence we need to return it to main.
        return head;
    }
    while(count < x-1 && temp!=NULL){
        temp = temp->next;
        count++;
    }
    
    if(temp!=NULL){
        //attaching the new node into LL:
        newNode->next = temp->next; //assigning the value of address of ith node (i.e to which new node is getting attached.)
        temp->next = newNode; //connecting (i-1)th node to new node.
        return head;
    }
    else{
        cout<<"!!! Index entered is out of bonds !!!"<<endl;
    }
    

}


void printLL(Node *head){
    Node *temp =head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int main(){
    Node *head= takeInput_better();
    printLL(head);

    int i,data;
    cout<<"Enter the index and data to attach the new node: "<<endl;
    cin>>i>>data;
    head = insertIntoIth(head, data, i);
    printLL(head);
}


