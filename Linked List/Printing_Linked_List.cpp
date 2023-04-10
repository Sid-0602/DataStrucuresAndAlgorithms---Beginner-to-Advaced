#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


class Node{
    public:
        int data;
        Node *next;

    //constructor: 
    Node(int data){
        this->data = data;
        next = NULL;
    }

};

void printLL(Node *head){

    /*
    //Using head method: 
    cout<<head->data<<" "; //print data of head element.
    head = head->next; //this will update value of head with the address of next element.
    */

   Node *temp =head; //create temp variable to work on, instead of working on head.

    //Using loops: 
   
    while(temp!=NULL){
        cout<<" -> "<<temp->data;
        temp = temp->next;
    }
}

int main(){
    
    
    Node n1(1);  //data in this node is '1' and address is NULL.

    Node *head = &n1; //address of n1 stored in head. (head is pointer variable).

    Node n2(2);  //data in this node is '2' and address is NULL.
    n1.next = &n2; //attaching 2 nodes (n1 and n2) of linked-list.
    
    /*
    //Dynamically : 

    Node *n3 = new Node(10);
    Node *head = n3;
    Node *n4 = new Node(20);

    //connecting n3 and n4: 
    n3->next = n4; //address of n4 is present inside n4 first block only.


    */

   Node n3(3);
   n2.next = &n3;
   Node n4(4);
   n3.next = &n4;
   Node n5(5);
   n4.next = &n5;
   printLL(head);
   cout<<endl;
   printLL(head);

}