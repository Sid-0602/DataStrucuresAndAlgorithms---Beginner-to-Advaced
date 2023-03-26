#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


class Node{
    //Node class :
   public:
        int data;
        Node *next;
    //Constructor :
    Node(int data){
        this->data= data;
        next = NULL;
    }

    
};


int main(){
    //Statically: 
    Node n1(1);  //data in this node is '1' and address is NULL.

    Node *head = &n1; //address of n1 stored in head. (head is pointer variable).

    Node n2(2);  //data in this node is '2' and address is NULL.
    n1.next = &n2; //attaching 2 nodes (n1 and n2) of linked-list.

    

    cout<<n1.data <<" "<<n2.data<<endl;

    cout<< &head <<endl; //address of node 1
    cout<< &n2 <<endl; //address of node 2

    cout<<n1.next <<" "<<n2.next<<endl; //address stored in node 1 and 2's next.
    cout<<"Acessing node 1 with help of head element: "<<head->data<<endl; //
}