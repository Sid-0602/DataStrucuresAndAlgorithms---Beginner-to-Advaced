#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};

int getSize(Node* head){
    Node* temp = head;
    int counter=0;
    while(temp!=NULL){
        temp = temp->next;
        counter++;
    }

    return counter;
}

void deleteAlternateNodes(Node *head) {
    //Write your code here
    Node* odd = head;
    int size = getSize(head);
    
    //if linked list is odd: 
    if(size%2!=0){
        while(odd->next!=NULL){
            odd->next = odd->next->next;
            odd = odd->next;
        }

        return;
    }
    else if(size%2==0){
        while(odd->next->next!=NULL){
            odd->next = odd->next->next;
            odd=odd->next;
        }

        odd->next = NULL;

        return;
    }
}


Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *head = takeinput();
    deleteAlternateNodes(head);
    print(head);
    delete head;
    return 0;
}


